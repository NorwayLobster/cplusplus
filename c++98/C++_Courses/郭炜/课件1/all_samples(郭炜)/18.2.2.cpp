//program 18.2.2.cpp  ��Ա����ģ��
#include <iostream>
using namespace std;
template <class T>
class A
{
public:
	template<class T2>  
	void Func( T2 t) { cout << t; } //��Ա����ģ��
};
int main()  
{
	A<int> a;
	a.Func('K'); //��Ա����ģ�� Func��ʵ����
	return 0;
}
