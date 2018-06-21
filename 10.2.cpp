#include<iostream>
#include<string>
using namespace std;
class Person{
private:
	enum {LIMIT = 25};
	string lname;
	char   fname[LIMIT];
public:
	Person()
	{
		lname="";
		fname[0]='\0';
	}
	Person(const string &ln,const char *fn = "Heyyou");
	void Show() const;
	void FormalShow() const;
};
int main()
{
	Person one;
	Person two("Smythecraft");
	Person three("Dimwiddy","Sam");
	one.Show();
	cout<<endl;
	three.FormalShow();
	return 0;
}
Person::Person(const string &ln,const char *fn)
{
	lname = ln;
	strcpy(fname,fn);
}

void Person::Show() const
{
	cout<<"here"<<endl;
	cout<<fname<<' '<<lname<<endl;
}
void Person::FormalShow() const
{
	cout<<lname<<","<<fname<<endl;
}

