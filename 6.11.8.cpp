#include<iostream>
#include<fstream>
const int SIZE = 60;
int main()
{
	using namespace std;
	char filename[SIZE];
	ifstream inFile;
	cout<<"Enter name of data file:";
	cin.getline(filename,SIZE);
	inFile.open(filename);
	if(!inFile.is_open())
	{
		cout<<"Coule not open the file"<<filename<<endl;
		cout<<"Program terminating.\n";
		exit(EXIT_FAILURE);
	}
	char ch;
	inFile >>ch;
	int count = 0;
	while(!inFile.eof())
	{
		++count;
		inFile>>ch;
	}
	cout<<"The number of characters:"<<count<<endl;
	return 0;
}
