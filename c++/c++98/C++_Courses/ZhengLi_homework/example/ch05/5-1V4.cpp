#include <iostream>
using namespace std;
int i;  //在全局命名空间的全局变量(又称文件作用域)

namespace Ns
{
    int j;    //在Ns命名空间中的全局变量
}
int main()
{
     i=5;  //为全局变量i赋值
	 Ns::j=6;//为全局变量j赋值
     {
       using namespace Ns;//使得当前块中可以直接引用Ns命名空间的标识符
        int i;  //局部变量
        i=7;
	    cout<<"i="<<i<<endl;// 输出7
       cout<<"j="<<j<<endl;// 输出6
     }
       cout<<"i="<<i<<endl;// 输出5
       return 0;
}
