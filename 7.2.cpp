#include<iostream>
using namespace std;
int input(double *a);
void output(double *a,int n);
double fun(double *a,int n);
int main()
{
	double a[10];
	int num = input(a);
	output(a,num);
	return 0;
}

int input(double *a)
{
	int i;
	for(i = 0;i<10;i++)
	{
		cin>>a[i];
		if(a[i]<=0)
			break;
	}
	return i;
}

void output(double *a,int n)
{
	for(int i = 0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<fun(a,n)<<endl;
}

double fun(double *a,int n)
{
	double sum = 0;
	for(int i = 0;i<n;i++)
		sum +=a[i];
	sum /=n;
	return sum;
}

