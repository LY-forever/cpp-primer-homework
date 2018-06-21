#include<iostream>
#include<cstring>
const int SIZE = 20;
int main()
{
	using namespace std;
	char fname[SIZE];
	char lname[SIZE];
	char fullname[2*SIZE+1];
	cout<<"Enter your first name:";
	cin>>fname;
	cout<<"Enter your last name:";
	cin>>lname;
	strncpy(fullname,lname,SIZE);
	strcat(fullname,",");
	strncat(fullname,fname,SIZE);
	fullname[SIZE-1] = '\0';
	cout<<"Here's the information in a single string:"
		<<fullname<<endl;
	return 0;
}