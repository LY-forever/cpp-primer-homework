#include<iostream>
#include<cctype>
int main()
{
	using namespace std;
	char ch;
	while(cin>>ch && ch!='@')
	{
		if(!isdigit(ch))
		{
			if(isupper(ch))
			{
				ch = tolower(ch);
			}
			else if(islower(ch))
			{
				ch = toupper(ch);
			}
		}
		cout<<ch<<endl;
	}
	return 0;
}

