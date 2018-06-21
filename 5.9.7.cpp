#include<iostream>
#include<cstring>
const int STR_LIM = 50;
int main()
{
	using namespace std;
	int count = 0;
	char word[STR_LIM];
	cout<<"Enter words(to stop,type the word done):\n";
	while(cin>>word && strcmp("done",word))
		++count;
	cout<<"You entered a total of "<<count<<" words.\n";
	return 0;
}
