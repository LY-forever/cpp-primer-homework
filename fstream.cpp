//��ȡabc.txt�е��ַ�����ȥ���е����֣�Ȼ�����ú���ַ������½���xzy.txt
#include<iostream>
#include<fstream>
#include<cctype>
const int size = 50;
int main()
{
	using namespace std;
	ifstream inFile;
	ofstream outFile;
	inFile.open("abc.txt");
	if(!inFile.is_open())
	{
		cout<<"error open."<<endl;
	}
	char ch;
	char chp[size];
	int i=0;
	inFile>>ch;
	while(!inFile.eof())
	{
		if(!isdigit(ch))
		{
			chp[i++] = ch;
		}
		inFile>>ch;
	}
	inFile.close();
	cout<<"close success!";
	outFile.open("xzy.txt");
	for(int j = 0;j<i;j++)
	{
		cout<<chp[j];
		outFile<<chp[j];
	}
	outFile.close();
	return 0;
}
				
