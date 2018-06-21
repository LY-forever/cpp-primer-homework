#include<iostream>
#include<string>
using namespace std;
struct Student
{
	string fname;
	string lname;
	char   grade;
	int    age;
};
int main()
{
	Student stu;
	cout<<"What is your first name?";
	cin.getline(stu.fname);
	cout<<"What is your last name?";
	cin.getline(stu.lname);
	cout<<"What letter do you deserve?";
	cin>>stu.grade;
	cout<<"What is your age?";
	cin>>stu.age;
	cout<<"Name: "<<stu.lname<<","<<stu.fname<<endl;
	cout<<"Grade: "<<char(int(stu.grade)+1)<<endl;
	cout<<"Age: "<<stu.age<<endl;
	return 0;
}