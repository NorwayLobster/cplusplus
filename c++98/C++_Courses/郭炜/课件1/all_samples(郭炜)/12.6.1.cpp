//program 12.6.1.cpp  �����
#include <iostream>
using namespace std;
class CTyre //��̥��
{
 	  private:
	  	int radius;	//�뾶  
	  	int width;    //���
	  public:	
        CTyre(int r,int w):radius(r),width(w) {   }
};
class CEngine //������
{
};
class CCar {  //������
	private:
		int price;  //�۸�
		CTyre tyre;
		CEngine engine;
	public:
   		CCar(int p,int tr,int tw );
};
CCar::CCar(int p,int tr,int tw):price(p),tyre(tr,tw)
{
};	
int main()
{	
	CCar car(20000,17,225); 
 	return 0;
}
