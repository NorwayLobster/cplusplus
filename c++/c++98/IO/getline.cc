 ///
 /// @file    getline.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-03-30 15:13:42
 ///
 
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using std::cout;
using std::endl;
using std::string;
using std::cin;
using std::fstream;
using std::stringstream;
int main(void)
{
	fstream fs("file.txt");
	stringstream ss;
	string line,line1;
	getline(fs,line);
	fs>>line1;
	cout<<line<<endl;
	cout<<line1<<endl;
//	ss<<line;
	ss<<"hello"<<" world";
	cout<<ss.good()<<endl;
	cout<<ss.str()<<endl;
	cout<<"------------------"<<endl;
	getline(fs,line);
	//ss<<line;
	ss<<" goodbye";
	cout<<ss.good()<<endl;
	cout<<ss.str()<<endl;
}
