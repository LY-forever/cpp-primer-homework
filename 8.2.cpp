#include<iostream>
//#include<string>
using namespace std;
const int size = 30;
struct CandyBar
{
	//string name;
	char   name[size];
	double weight;
	int	   calorie;
};
void assign(CandyBar &cb,char *na = "Millennium Munch",double w = 2.85,int c = 350);
void show (CandyBar &cb);
int main()
{
	CandyBar cc;
	assign(cc,"love liu");
	show(cc);
	return 0;
}
void assign(CandyBar &cb,char *na,double w,int c)
{
	cb.name[size] = *na;
	cb.weight	  = w;
	cb.calorie	  = c;
}

void show(CandyBar &cb)
{
	cout<<cb.name<<endl<<cb.weight<<endl<<cb.calorie<<endl;
}
