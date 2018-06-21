#include<iostream>
using namespace std;
const int inch_to_feet = 12;
int main()
{
	int inch,feet;
	cout<<"Please input your height\\inch:_";
	cin>>inch;
	feet = inch/inch_to_feet;
	inch %=inch_to_feet;
	cout<<"your height is "<<feet<<" foot,"<<inch<<" inch"<<endl;
	return 0;
}

