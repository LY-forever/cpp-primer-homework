#include<iostream>
using namespace std;
const int MIN_PER_DEGREE = 60;
const int SECOND_PER_MIN = 60;
int main()
{	
	int de,min,sec;
	double sum;
	cout<<"Enter a latitude in degrees,minutes,and seconds:"<<endl;
	cout<<"First,enter the degrees:";
	cin>>de;
	cout<<"Next,enter the minutes of arc:";
	cin>>min;
	cout<<"Finally,enter the seconds of arc:";
	cin>>sec;
	sum = de + double(min)/MIN_PER_DEGREE + double(sec)/SECOND_PER_MIN/MIN_PER_DEGREE;
	cout<<de<<" degrees,"<<min<<" minutes, "<<sec<<" seconds = "<<sum<<" degree."<<endl;
	return 0;
}

