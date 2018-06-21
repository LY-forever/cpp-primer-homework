#include<iostream>
const int strsize = 50;
void meau();
void judge();
char ch;
void name();
void title();
void bop();
void prefence();
void next();
using namespace std;
struct bop
{
	char fullname[strsize];
	char title[strsize];
	char bopname[strsize];
	int prefence;
};
struct bop bopa[5] =
{
	{"Wimp Macho","title1","bopn1",0},
	{"Raki Rhodes","Junior Programmer","bop2",1},
	{"Celia Laiter","title3","MIPS",2},
	{"Hoppy Hipman","Analyst Traninee","bop4",1},
	{"Pat Hand","title5","LOOPY",2}
};
int main()
{
	meau();
	judge();
	return 0;
}

void meau()
{
	cout<<"Benevolent Order of Programmers Report\n"
		<<"a.display by name\t b.display by title\n"
		<<"c.display by bopname\t d.display by preference"<<endl
		<<"q.quit"<<endl<<"Enter your choice:\n";
	cin>>ch;
}

void judge()
{
	switch(ch){
	case 'a':name();
		next();
		break;
	case'b':title();
		next();
		break;
	case 'c':bop();
		next();
		break;
	case 'd':prefence();
		next();
		break;
	case 'q':cout<<"Bye"<<endl;
		break;
	default:next();
		break;
	}
}
void name()
{
	for(int i=0;i<5;i++)
		cout<<bopa[i].fullname<<endl;
}

void title()
{
	for(int i=0;i<5;i++)
		cout<<bopa[i].title<<endl;
}

void bop()
{
	for(int i=0;i<5;i++)
		cout<<bopa[i].bopname<<endl;
}

void prefence()
{
	for(int i=0;i<5;i++)
	{
		if(bopa[i].prefence == 0)
			cout<<bopa[i].fullname<<endl;
		else if(bopa[i].prefence ==1)
			cout<<bopa[i].title<<endl;
		else 
			cout<<bopa[i].bopname<<endl;
	}
}

void next()
{
	cout<<"Next choice:";
	cin>>ch;
	judge();
}