#include<iostream>
#include<string>
//const�������弰��ʼ��
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
	void   outInfo() const;//const��Ա����
	void   outInfoOne();
private:
	int age;
	string name;
	//const int sumStu = 100;//ERROR,ֻ�о�̬�������������ݳ�Ա�ſ��������г�ʼ��
	//const int okNum;//ERROR �����ڹ��캯����/��Ա��ʼֵ�趨�б��г�ʼ��
	static const int staConstNum;//��ͨ�����룬����Ӧ������������ʼ��
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
	//age = 10;//ERROR:��������ͨ�������������"age",����޷���������޸�
	cout<<"this is a const function."<<endl;
}

void Student::outInfoOne()
{
	cout<<"this is a non-const function."<<endl;
}
int main()
{
	//const��ָ��Ľ��
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
	//const��Ա����
	//��֤���Ա�������޸����ݳ�Ա��const����ֻ�ܵ���const��Ա����������const��Ա���������ɷ�const�������
	//����Ա��������Ϊconst ֻ���ڲ����б�������const�ؼ���
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
	conOne.outInfo();//right const�������const��Ա����
	//conOne.outInfo();//error:const �����ܵ��÷�const��Ա����

	int a;
	cin>>a;
	const char * p1 = "abc";
	return 0;
}
//const��Ϊ�����β�
int self(const int i)
{
	//i++;  error
	return i;
}

