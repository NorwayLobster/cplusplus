 //program 18.1.1.cpp  Swap����ģ�� 
#include <iostream>
using namespace std;
template <class T>
void Swap(T & x,T & y) 
{
	T tmp = x;
	x = y;
	y = tmp;
}
int main()
{
	int n = 1,m = 2;
	Swap(n,m); //�������Զ����� void Swap(int & ,int & )����
	double f = 1.2,g = 2.3;
	Swap(f,g); //�������Զ����� void Swap(double & ,double & )����
	return 0;
}
