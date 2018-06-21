#include<iostream>
using namespace std;
const int size = 5;
template <class T>
T max(T t[size]);
int main()
{
	int a[size] = {1,2,3,5,9};
	double d[size] = {1.2,2.3,5.6,8.9,10.1};
	cout<<max(a)<<endl;
	cout<<max(d)<<endl;
	return 0;
}
template <class T>
T max(T t[size])
{
	T max = t[0];
	for(int i= 1;i<size;i++)
	{
		if(t[i]>max)
			max = t[i];
	}
	return max;
}