#include<iostream>
void meau();
void judge();
using namespace std;
char ch;
int main()
{
	//char ch;
	meau();
	judge();
	return 0;
}
void meau()
{
	cout<<"Please enter one of the following choices:\n"
		<<"c)carnivore\t p)pianist\n"
		<<"t)tree \t g)game"<<endl;
	cin>>ch;
}
void judge()
{
	while(ch!='c' && ch!='p' && ch!='t' &&ch !='g')
	{
		cout<<"Please enter a c,p,t,or g:";
		cin>>ch;
	}
	switch(ch)
	{
	case 'c':cout<<"A carnivore is a carnivore."<<endl;
			break;
	case 'p':cout<<"A pianist is a pianist."<<endl;
			break;
	case 't':cout<<"A maple is a tree."<<endl; 
			break;
	case 'g':cout<<"Rentiantang is a game."<<endl;
			break;
	default:cout<<"wtf"<<endl;
	}
}
	