#include<iostream>
void sum(int &i,int &j);
using namespace std;
int main()
{
	int m,n;
	cout<<"Please input the value of m and n:";
	cin>>m;
	cin>>n;
	sum(m,n);
	return 0;
}

void sum(int &i,int &j)
{
	int sum = 0;
	for(int k = i;k<=j;k++)
	{
		sum +=k;
	}
	cout<<"The sum between "<<i<<" and "<<j<<" is "<<sum<<endl;
} 
	