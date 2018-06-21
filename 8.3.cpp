/*
#include<iostream>
#include<string>
#include<cstring>
#include<cctype>
using namespace std;
void upper(string &s);
int main()
{
	string str;
	cout<<"Please input the value of string:";
	getline(cin,str);
	cin.get();
	upper(str);
	return 0;
}

void upper(string &s)
{
	char *ss = s;
	int length = strlen(*ss);
	char ch;
	for(int i = 0;i<length;i++)
	{
		cin>>ch;
		cout<<toupper(ch);
	}
}
*/
#include<iostream>  
#include<string> 
#include<cctype> 
using namespace std;  
void wordupper(string &a);  
int main()  
{  
    string str;  
    cout << "Enter a string (q to quit):";  
    getline(cin, str);  
	cin.get();
    int i=0;  
    while (str != "q")  
    {  
        wordupper(str);  
        cout << str <<endl;  
        cout << "next string (q to quit):";  
        getline(cin, str);  
		cin.get();
    }  
    cout << "bey!\n";  
    return 0;  
}  
void wordupper(string &a)  
{  
    int i=0;  
	cout<<"here"<<endl;
	cout<<a[0];
    while (a[i])  
    {  
		cout<<a[i];
        a[i] = toupper(a[i]);  
        i++;  
    }  
}  
