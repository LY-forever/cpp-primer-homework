#include<iostream>
#include<string>
const int HIGH = 10000;
const int SIZE = 50;
using namespace std;
struct donation
{
	string name;
	double money;
};
int main()
{
	//using namespace std;
	string Grand[SIZE];
	string Patrons[SIZE];
	int j=0,number;
	int k = 0;
	cout<<"Please input the number of donation:";
	cin>>number;
	donation *p =new donation[number];
	for(int i=0;i<number;i++)
	{
		cout<<"please input the name of donation:";
		cin>>p[i].name;
		cout<<"please input the money of the donation:";
		cin>>p[i].money;
		if(p[i].money>HIGH)
			strcpy(Grand[j++],p[i].name);
		else 
			strcpy(Patrons[k++],p[i].name);
	}
	return 0;
}