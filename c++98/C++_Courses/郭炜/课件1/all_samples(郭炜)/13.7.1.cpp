//program 13.7.1.cpp  ����double
#include <iostream>
using namespace std;
class Complex
{
   double real,imag;
   public:
	  Complex(double r=0,double i=0):real(r),imag(i) { };
	  operator double () { return real; } //����ǿ������ת������� double
};
int main()
{
 	Complex c(1.2,3.4);
 	cout << (double)c << endl; //��� 1.2
 	double n = 2 + c; //�ȼ��� double n=2+c.operator double()
 	cout << n;	//��� 3.2
}

