#include<iostream>
using namespace std;
int main()
{
	int i ,sum = 0;
	do{
		cout<<"Please input the number:";
		cin>>i;
		sum += i;
		cout<<"The sum is "<<sum<<endl;
	}
	while(i!=0);
	return 0;
}


