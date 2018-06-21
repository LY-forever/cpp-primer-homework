#include<iostream>
#include<string>
//const常量定义及初始化
using namespace std;
const int NUM = 10;
int self(const int i);
class Student
{
public:
	Student(void);
	~Student(void);
	double addScour(const double& sA,const double& sB);
	void   subScour(const double& sA,const double& sB,double& retScour);
	void   outInfo() const;//const成员函数
	void   outInfoOne();
private:
	int age;
	string name;
	//const int sumStu = 100;//ERROR,只有静态常量整数型数据成员才可以在类中初始化
	//const int okNum;//ERROR 必须在构造函数基/成员初始值设定列表中初始化
	static const int staConstNum;//能通过编译，但是应该在类的外面初始化
	const int constNum;
};
const int Student::staConstNum = 10;
Student::Student(void):constNum(10)
{

}
Student::~Student(void)
{

}

double Student::addScour(const double& sA,const double& sB)
{
	//sA +=10;//ERROR
	return sA+sB;
}
void Student::subScour(const double& sA,const double& sB,double& retScour)
{
	retScour = sA - sB;
}
void Student::outInfo() const 
{
	//age = 10;//ERROR:由于正在通过常量对象访问"age",因此无法对其进行修改
	cout<<"this is a const function."<<endl;
}

void Student::outInfoOne()
{
	cout<<"this is a non-const function."<<endl;
}
int main()
{
	//const与指针的结合
	char str[] = "test";
	char str2[]= "nihao";
	const char *p = str;
	cout<<p<<endl;
	p = str2;
	cout<<p<<endl;
	char * const q = str;
	cout<<q<<endl;
	//q = str2; // error
	cout<<self(4)<<endl;
	cout<<self(5)<<endl;
	//const成员函数
	//保证其成员函数不修改数据成员，const对象只能调用const成员函数，但是const成员函数可以由非const对象调用
	//将成员函数声明为const 只用在参数列表后面加入const关键字
	Student newOne;
	double scourA = 90;
	double scourB = 100;
	double sum = 0;
	sum = newOne.addScour(scourA,scourB);
	double sub;
	newOne.subScour(scourA,scourB,sub);
	cout<<"sumScour = "<<sum<<"\tsumScour="<<sub<<endl;
	newOne.outInfo();
	cout<<"***************"<<endl;

	const Student conOne;
	conOne.outInfo();//right const对象调用const成员函数
	//conOne.outInfo();//error:const 对象不能调用非const成员函数

	int a;
	cin>>a;
	const char * p1 = "abc";
	return 0;
}
//const作为函数形参
int self(const int i)
{
	//i++;  error
	return i;
}

