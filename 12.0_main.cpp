#include<iostream>
using std::cout;
#include "12_0.h"
void callme1(StringBad &);		//pass by reference
void callme2(StringBad);		//pass by value 

int main()
{
	using std::endl;
	StringBad headline1("Celery Stalks at Midnight");
	StringBad headline2("Lettuce Prey");
	StringBad sports(Spinach Leaves Bow1 for Dollars");
	cout<<"headline1:"<<headline1<<endl;
	cout<<"headline2:"<<headline2<<endl;
	cout<<"sports: "<<sports<<endl;
	callme1(headline1);
	cout<<"headline1:"<<headline1<<endl;
	callme2(headline2);
	cout<<"headline2"<<headline2<<endl;
	cout<<"Initilize one object to another: \n";
	StringBad sailor = sports;
	cout<<"sailor:"<<sailor<<endl;
	cout<<"Assign one object to another: \n";
	StringBad knot;
	knot = headline1;
	cout<<"knot:"<<kont<<endl;
	cout<<"End of main()\n";
	return 0;
}

void callme1(StringBad & rsb)
{
	cout<<"String passed by reference: \n";
	cout<<" \""<<rsb<<"\"\n";
}

void callme2(StringBad sb)
{
	cout<<"String passed by value: \n";
	cout<<" \""<<sb<<"\"\n";
}