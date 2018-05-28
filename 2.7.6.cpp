#include<iostream>
using namespace std;
void change(int h,int m);
int main()
{
	int hour,mintue;
	cout<<"Enter the number of hours:";
	cin>>hour;
	cout<<"Enter the number of minutes:";
	cin>>mintue;
	change(hour,mintue);
	return 0;
}
void change(int h,int m)
{
	cout<<"Time:"<<h<<":"<<m<<endl;
}