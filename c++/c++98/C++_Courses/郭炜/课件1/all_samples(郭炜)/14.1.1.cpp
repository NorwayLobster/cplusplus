//program 14.1.1.cpp ��ѧ���������
#include <iostream>
#include <string>
using namespace std;
class CStudent
{
    private:
		string name;
		string id;  //ѧ��
		char gender; //�Ա�,'F'����Ů��'M'������
		int age;
	public:
		void PrintInfo();
		void SetInfo( const string & name_,const string & id_, int age_,char gender_ );
         string GetName() {  return name;  }
};
class CUndergraduateStudent:public CStudent  //�������࣬�̳���CStudent��
{
	private:
		string department; //ѧ��������ϵ������
	public:
		void QulifiedForBaoyan() {//���豣���ʸ�
			cout << "qulified for baoyan" << endl;
		}
		void PrintInfo() {
			CStudent::PrintInfo(); //���û����PrintInfo
			cout << "Department:" << department <<endl;
		}
		void SetInfo( const string & name_,const string & id_,
			int age_,char gender_ ,const string & department_) {
			CStudent::SetInfo(name_,id_,age_,gender_); //���û����SetInfo
			department = department_;
		}
};
void CStudent::PrintInfo()
{
	cout << "Name:" << name << endl;
	cout << "ID:" << id << endl;
	cout << "Age:" << age << endl;
	cout << "Gender:" << gender << endl;
}
void CStudent::SetInfo( const string & name_,const string & id_, int age_,char gender_ )
{
	name = name_;
	id = id_;
	age = age_;
	gender = gender_;
}
int main()
{
	CStudent s1;
	CUndergraduateStudent s2;
	s2.SetInfo("Harry Potter","118829212",19,'M',"Computer Science");
	cout <<  s2.GetName() << " " ;
	s2.QulifiedForBaoyan ();
	s2.PrintInfo ();
	cout << "sizeof(string)=" << sizeof(string) << endl;
	cout << "sizeof(CStudent)=" << sizeof(CStudent) << endl;
    cout << "sizeof(CUndergraduateStudent)=" << sizeof(CUndergraduateStudent) << endl;
	return 0;
}

