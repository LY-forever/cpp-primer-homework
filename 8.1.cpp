#include<iostream>
#include<string>
using namespace std;
void fun(string *s);
void fun(string *s,int n);

int main()
{
	string str;
	int num;
	cout<<"Please input the value of string:";
	getline(cin,str);
	cin.get();
	cout<<"Please input the value of n,if not have n,input 0:";
	cin>>num;
	if(num == 0)
		fun(&str);
	else 
		fun(&str,num);
	return 0;
}

void fun(string *s)
{
	cout<<*s;
}
void fun(string *s,int n)
{
	for(int i=0;i<n;i++)
		cout<<*s<<endl;
}