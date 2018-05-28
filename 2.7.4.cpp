#include<iostream>
using namespace std;
int trans(int &ce);
int main()
{	
	int ce2;
	cout<<"Please enter a Celsius value: ";
	cin>>ce2;
	cout<<"20 degrees Celsius is "<<trans(ce2)<<" degrees Fahrenheit."<<endl
		;
	return 0;
}

int trans(int &ce)
{
	return 1.8*ce+32.0;
}
