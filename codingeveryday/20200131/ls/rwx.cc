///
/// @file    rwx.cc
/// @author  ChengWANG(cheng.wang.801@gmail.com)
/// @date    2020-02-01 01:58:04
///

#include <cstdio>
#include <cstring>// strcpy()等
#include <string>//  string类
#include <algorithm>//  string类
#include <sys/stat.h>//  string类
using std::string;
using std::reverse;
//note: struct stat 中 mode_t 为
//unsigned int

void rwx(unsigned int a,string & s){
	unsigned int mask=(1<<3)-1;
	printf("mask:0x%x\n",mask);
	printf("mask:0x%x\n",7);
	printf("mask:0x%x\n",1<<3);
	int flag;
	for(int i=0;i<3;++i){
		for(int j=0;j<3;++j){
			mask=1<<(3*i+j);
			flag= (mask&a)>>(3*i+j); //attention: 按位与优先级 < 移位 < 四则
			printf("flag:%d\n",flag);
			printf("mask:0x%x\n",mask);
			//1.switch(): case语句只是入口标号，一旦进去，要么break出来，要么一路执行到结束；
			//			  下面case语句的分支，被上面的case语句共享
			switch(j){
				case 0: 
					printf("j:%d\n",j);
					if(flag) s.push_back('x'); else s.push_back('-');
					break;
				case 1: 
					printf("j:%d\n",j);
					if(flag) s.push_back('w'); else s.push_back('-');
					break;
				case 2: 
					printf("j:%d\n",j);
					if(flag) s.push_back('r'); else s.push_back('-');
					break;
				default:
					printf("j:%d\n",j);

			}

		}
	}
#if 0
	switch(1){
		case S_ISDIR(a): s.push_back('d'); break;
		case S_ISLNK(a): s.push_back('l'); break;
		case S_ISFIFO(a): s.push_back('p'); break;
		case S_ISREG(a): s.push_back('-'); break;
		default: s.push_back('o');
	}
#endif
	if(S_ISDIR(a)) s.push_back('d');
	else if(S_ISLNK(a)) s.push_back('l');
	else if(S_ISFIFO(a)) s.push_back('p');
	else if(S_ISREG(a)) s.push_back('-');
	else s.push_back('o');
}


//
//The following mask values are defined for the file type of the st_mode field:
//
//S_IFMT     0170000   bit mask for the file type bit field
//
//S_IFSOCK   0140000   socket
//S_IFLNK    0120000   symbolic link
//S_IFREG    0100000   regular file
//S_IFBLK    0060000   block device
//S_IFDIR    0040000   directory
//S_IFCHR    0020000   character device
//S_IFIFO    0010000   FIFO
//
//Thus, to test for a regular file (for example), one could write:
//
//stat(pathname, &sb);
//if ((sb.st_mode & S_IFMT) == S_IFREG) {
//	/* Handle regular file */
//}
//
//Because tests of the above form are common, additional macros are defined by POSIX to allow the test of the file type in st_mode to be written more
//concisely:
//
//S_ISREG(m)  is it a regular file?
//
//S_ISDIR(m)  directory?
//
//S_ISCHR(m)  character device?
//
//S_ISBLK(m)  block device?
//
//S_ISFIFO(m) FIFO (named pipe)?
//
//S_ISLNK(m)  symbolic link?  (Not in POSIX.1-1996.)
//
//S_ISSOCK(m) socket?  (Not in POSIX.1-1996.)
//

//10.S_ISLNK()
//	printf("st_mode,is link or not:%d\n",S_ISLNK(shared_ptr->st_mode));
//11.S_ISDIR()
//	printf("st_mode,is dir or not:%d\n",S_ISDIR(shared_ptr->st_mode));
//12.S_ISREG()
//	printf("st_mode,is normal file or not:%d\n",S_ISREG(shared_ptr->st_mode));
//13.S_ISFIFO()
//	printf("st_mode,is fifo or not:%d\n",S_ISFIFO(shared_ptr->st_mode));

	int main(){


		string s;
		rwx(33188,s);


		reverse(s.begin(),s.end());
		printf("s:%s\n",s.c_str());

		return 0;
	}
