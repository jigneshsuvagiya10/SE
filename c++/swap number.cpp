#include<iostream>
using namespace std;

int main()
{
	int a,b;
	
	cout<<"__Enter two number__"<<endl;
	
	cout<<"A = ";
	cin>>a;
	cout<<"B = ";
	cin>>b;
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	cout<<"A = "<<a<<endl;
	cout<<"B = "<<b;
	
	return 0;
}
