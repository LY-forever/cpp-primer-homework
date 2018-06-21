#include<iostream>
#include<string>
using namespace std;
struct donation
{
	string name;
	double money;
};
int main()
{
	int num;
	cout<<"Please input the number of donpors:";
	cin>>num;
	donation *list = new donation[num];
	int i = 0;
	cin.get();
	while(i<num)
	{
		cout<<"Enter the name:";
		getline(cin,list[i].name);
		cin.get();
		cout<<"Enter the amout:";
		cin>>list[i].money;
		cin.get();
		i++;
	}
	cout<<"*********************************************"<<endl;
	int count;
	cout<<"Grand Patrons:"<<endl;
	for(i=0;i<num;i++)
	{
		if(list[i].money>10000)
		{
			count++;
			cout<<"name:\t"<<list[i].money;
			cout<<"*********************************************"<<endl;
		}
	}
	if(count == 0)
		cout<<"none\n\n**********************************************\n";
	cout<<"Other Patrons:\n";
	for(i = 0;i<num;i++)
	{
		if(list[i].money<=10000)
		{
			count++;
			cout<<"name:\t"<<list[i].name;
			cout<<"\tdonation:"<<list[i].money;
			cout<<endl;
		}
	}
	if(count == 0)
		cout<<"none\n\n";
	delete []list;
	return 0;
}
