#include<iostream>
#include<string>
const int SIZE = 50;
using namespace std;
struct Pizza{
	char	name[SIZE];
	double  dia;
	double	weight;
};
int main()
{
	Pizza p1;
	cout<<"Please input the name:";
	cin.getline(p1.name,SIZE);
	cout<<"Please input the diameter:";
	cin>>p1.dia;
	cout<<"Please input the weight:";
	cin>>p1.weight;
	cout<<p1.name<<"\t"<<p1.dia<<"\t"<<p1.weight<<endl;
	return 0;
}
	
