#include<iostream>
using namespace std;

int main()
{
	int num,sum=0,a;
	
	cout<<"Enter any number : ";
	cin>>num;
	
	while(num!=0)
	{
		a=num%10;
		sum+=a;
		num=num/10;
	}
	
	cout<<"Addition of digits : "<<sum;
	return 0;
}
