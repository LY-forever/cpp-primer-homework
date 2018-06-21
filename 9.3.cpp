#include<iostream>
#include<string>
#include<cstring>
#include<new>
using namespace std;
const int num = 2;
struct chaff
{
	char dross[20];
	int  slag;
};
char buffer[100];
int main()
{
	chaff *st1;
	st1 = new(buffer)chaff[num];
	char s[20];
	for(int i = 0;i<num;i++)
	{
		cout<<"Please input the dross:";
		cin.getline(s,20);
		//getline(cin,s);
		//cin.get();
		strcpy(st1[i].dross,s);
		cout<<"Please input slag:";
		cin>>st1[i].slag;
		cin.get();
	}
	for(i=0;i<num;i++)
	{
		cout<<st1[i].dross<<"\t"<<st1[i].slag<<endl;
	}
	return 0;
}

