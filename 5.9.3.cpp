#include<iostream>
double Daphne(int &i);
double Cleo(int i);
const int MONEY = 100;
const double DAN = 0.10;
const double FU	 = 0.05;
using namespace std;
int main()
{
	int y = 0;
	//cout<<Daphne(0)<<endl;
	//cout<<Cleo(0)<<endl;
	while(Daphne(y)>=Cleo(y))
	{
		y++;
	}
	cout<<y<<" year later"<<endl;
	cout<<Daphne(y)<<"\t"<<Cleo(y)<<endl;
	return 0;
}

double Daphne(int &i) 
{
	return MONEY*(1+i*DAN);
}
double Cleo(int i)
{
	if(i == 0)
	{
		return MONEY;
	}
	else
	{
		return Cleo(i-1)*(1+FU);
	}
}



	