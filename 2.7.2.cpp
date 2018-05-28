//要求用户输入一个以浪为单位的距离，转换成码(一浪等于220码)
#include<iostream>
using namespace std;
int main()
{
	double lang,yard;
	cout<<"Dear,please input the number/lang:"<<endl;
	cin>>lang;
	yard = lang*220;
	cout<<"Transformed is:"<<yard<<"/yard"<<endl;
	return 0;
}