/*
#include<iostream>
#include<string>
using namespace std;
struct car
{
	string company;
	int year;
};
int main()
{
	int count;
	cout<<"How many cars do you wish to catlog?";
	car *p = new car[count];
	for(int i =0;i<count;i++)
	{
		cout<<"Car #"<<i+1<<":"<<endl;
		cout<<"Please enter the make:";
		getline(cin,*(p+i).company);
		cout<<"Please enter the year made:";
		cin>>*(p+i).year;
	}
	cout<<"Here is your collection:"<<endl;
	for(int j = 0;j<count;j++)
	{
		cout<<*(p+i).year<<*(p+i).company<<endl;
	}
	return 0;
}
*/
#include<iostream>
struct car
{
	char name[20];
	int  year;
};
int main()
{
	using namespace std;
	int n;
	cout<<"How many cars do you wish to catalog?:";
	cin>>n;
	while(cin.get()!='\n')
		;
	car *pc = new car[n];
	int i;
	for(i = 0;i<n;i++)
	{
		cout<<"Car#"<<(i+1)<<":\n";
		cout<<"Please enter the make:";
		cin.getline(pc[i].name,20);
		cout<<"Please enter the year made:";
		cin>>pc[i].year;
		while(cin.get()!='\n')
			;
	}
	cout<<"Here is your collection:\n";
	for(i=0;i<n;i++)
		cout<<pc[i].year<<" "<<pc[i].name<<"\n";
	delete[] pc;
	return 0;
}