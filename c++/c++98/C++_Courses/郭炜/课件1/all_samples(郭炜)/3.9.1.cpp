//program 3.9.1.cpp  freopen�÷�ʾ��
#include <iostream>
using namespace std;
int main()
{
 	freopen("c:\\tmp\\test.txt","r",stdin); // �ַ����е�"\"Ҫд���� 
	int n;
	cin >> n;
	while( n -- ) {
		   int a,b;
		   cin >> a >> b;
		   cout << (a>b?a:b) << endl;
    }
}

