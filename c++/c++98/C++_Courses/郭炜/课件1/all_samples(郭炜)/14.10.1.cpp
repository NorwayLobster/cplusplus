//program 14.10.1.cpp ������͸�ֵ�����
#include <iostream>
using namespace std;
class CBase 
{
	public:
		CBase() { }
		CBase(CBase & c) { cout << "CBase::copy constructor called" <<endl; }  
		CBase & operator=( const CBase & b)	
		{
			cout << "CBase::opeartor= called" <<endl; 
			return * this;
		}
};
class CDerived:public CBase {  };
int main()  
{  		
	CDerived d1,d2;
	CDerived d3(d1); // d3��ʼ�������л����CBase�ิ�ƹ��캯��
	d2 = d1;  //�����CBase�����ص�"="
	return 0;
}

