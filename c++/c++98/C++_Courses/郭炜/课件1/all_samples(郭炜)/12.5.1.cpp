//program 12.5.1.cpp ������Ա����
#include <iostream>
using namespace std;
class Sample {
	public:
		   Sample() { }
		void GetValue()  const;
}; 
void Sample::GetValue() const
{
}
int main()
{
 	const Sample o;
  	o.GetValue();	//���������Ͽ���ִ�г�����Ա����
  	return 0;
}

