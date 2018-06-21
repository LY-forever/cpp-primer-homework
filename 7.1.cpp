#include<iostream>
double average(double i,double j);
int main()
{
	using namespace std;
	double x,double y;
	do{
		cout<<"Please input two numbers:";
		cin>>x;
		cin>>y;
		if(x!=0 && y!=0)
			cout<<"The average of "<<x<<" and "<<y<<" is "<<average(x,y)<<endl;
		else break;
	}
	while(1);
	return 0;
}

double average(double i,double j)
{
	return 2.0*i*j/(i+j);
}

	