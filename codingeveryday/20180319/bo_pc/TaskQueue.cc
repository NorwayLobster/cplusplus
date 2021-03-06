 ///
 /// @file    TaskQueue.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-03-17 11:57:01
 ///
 
#include "TaskQueue.h"

#include <iostream>
using std::cout;
using std::endl;

namespace wd
{

TaskQueue::TaskQueue(int queSize)
: _mutex()
, _notFull(_mutex)
, _notEmpty(_mutex)
, _queSize(queSize)
{}

bool TaskQueue::full() const
{
	return _queSize == _que.size();
}

bool TaskQueue::empty() const
{
	return _que.size() == 0;
}

void TaskQueue::push(TaskQueue::Product product)
{
	MutexLockGuard mlg(_mutex);
	while(full()) // 使用while是为了防止异常唤醒的情况
	{
		cout<<"before _notFull"<<endl;
		_notFull.wait();
		cout<<"_notFull"<<endl;
	}

	_que.push(product);
	_notEmpty.notify();
}

TaskQueue::Product TaskQueue::pop()
{
	MutexLockGuard mlg(_mutex);	
	while(empty())
	{
		cout<<"before _notEmpty"<<endl;
		_notEmpty.wait();
		cout<<"after_notEmpty"<<endl;
	}

	Product product = _que.front();
	_que.pop();
	_notFull.notify();

	return product;
}

}//end of namespace wd
