//program 12.1.2.2.cpp   ���캯��������
class  CTest {
	public:
		CTest( int n) { }           //���캯��(1)
		CTest( int n, int m) { }    //���캯��(2) 
         CTest() { }                 //���캯��(3)
};
int main(){
	CTest  array1[3] = { 1, CTest(1,2) };	// ����Ԫ�طֱ��ù��캯��(1),(2),(3)��ʼ�� 
	CTest  array2[3]={ CTest(2,3), CTest(1,2) ,1}; //����Ԫ�طֱ���(2),(2),(1)��ʼ�� 
	CTest * pArray[3] = { new CTest(4), new CTest(1,2)};
     //����Ԫ��ָ��Ķ���ֱ��� (1),(2)��ʼ�� 
	return 0;
}

