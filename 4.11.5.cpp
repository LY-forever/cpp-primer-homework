#include<iostream>
using namespace std;
const int Name_SIZE = 30;
struct CandyBar{
	char   name[Name_SIZE];
	double weight;
	int	   kaluli;
};
int main()
{
	CandyBar snack = {"MochaMunch",2.3,350};
	cout<<snack.name<<"\t"<<snack.weight<<"\t"<<snack.kaluli<<endl;
	return 0;
}
