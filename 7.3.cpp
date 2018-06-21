#include<iostream>
#include<string>
using namespace std;
struct box
{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};
void show(box b1);
void fun(box *b);
int main()
{
	box b2;
	cout<<"Please input the maker:";
	cin.getline(b2.maker,40);
	cout<<b2.maker<<endl;
	//cin.get();
	cout<<"Please input the height,width and length:";
	cin>>b2.height>>b2.width>>b2.length;
	cout<<b2.height<<endl;
	fun(&b2);
	show(b2);
	return 0;
}

void fun(box *b)
{
	b->volume = b->height*b->width*b->length;
	cout<<b->volume<<endl;
}

void show(box b1)
{
	cout<<b1.maker<<endl<<b1.height<<endl<<b1.width<<endl<<b1.length<<endl<<b1.volume<<endl;
}

/*
#include<iostream>
using namespace std;
struct box
{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};
void fun_a(box a);
void fun_b(box *a);
int main()
{
	box a ={
		"Love liu",
			10,
			20,
			1,
			22
	};
	fun_a(a);
	fun_b(&a);
	return 0;
}

void fun_a(box a)
{
	cout<<a.maker<<endl<<a.height<<endl<<a.width<<endl<<a.length<<endl<<a.volume<<endl;
}

void fun_b(box *a)
{
	a->volume = a->height*a->width*a->length;
	cout<<a->volume<<endl;
}
*/