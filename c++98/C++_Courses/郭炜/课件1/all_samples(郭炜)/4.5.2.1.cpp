	//program 4.5.3.1.cpp  ������Ϊ��������ֵ
#include <iostream>
using namespace std;
int n = 4;
int & SetValue()  
{	
    return n;  //���ض�n������
}
int main() 
{
	SetValue() = 40;   //����ֵ�����õĺ������ñ��ʽ��������Ϊ��ֵʹ��
	cout << n << endl; //��� 40
    int & r = SetValue();
	cout << r << endl; //��� 40
	return 0; 
}

