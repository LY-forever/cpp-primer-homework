#include<iostream>
#include<string>
using namespace std;
void add(class Student &s);//添加信息
void show(class Student &s);//显示信息
//void grade_less();
class Student
{
public:
	string fname;
	string lname;
	int    age;
	char   grade;
};

int main()
{
	class Student Fstu;
	add(Fstu);
	show(Fstu);
	return 0;
}

void add(Student &s)
{
	cout<<"What is your first name?";
	getline(cin,s.fname);
	cin.get();
	cout<<"What is your last name?";
	getline(cin,s.lname);
	cin.get();
	cout<<"What letter grade do you deserve?";
	cin>>s.grade;
	s.grade = char(int(s.grade)+1);
	cout<<"What is your age?";
	cin>>s.age;
}

void show(Student &s)
{
	cout<<"Name: "<<s.lname<<","<<s.fname<<endl;
	cout<<"Grade:"<<s.grade<<endl;
	cout<<"Age:"<<s.age<<endl;
}
	