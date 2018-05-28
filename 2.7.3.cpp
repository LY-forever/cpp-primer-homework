#include<iostream>
using namespace std;
void first();
void second();
int main()
{
	first();
	first();
	second();
	second();
	return 0;
}

void first()
{
	cout<<"Three blind mice"<<endl;
}

void second()
{
	cout<<"See how they run"<<endl;
}
