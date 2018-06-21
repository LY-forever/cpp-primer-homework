#include<iostream>
using namespace std;
int main()
{
	int sum=0;
	char *month[12] = 
	{"Jan","Feb","Mar","Apr","May","Jun",
	"July","Aug","Sep","Oct","Nov","Dec"};
	int count[12]={0};
	for(int i = 0;i<12;i++)
	{
		cout<<"The count of "<<month[i]<<" is:";
		cin>>count[i];
		sum +=count[i];
	}
	cout<<"The sum of this year is:"<<sum<<endl;
	return 0;
}
	
