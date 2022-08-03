#include<iostream>
using namespace std;

int sum( int a )
{
	if(a==0)
	{
		return 0;
	}
	
	else 
	{
		return a+sum(a-1);
	}
}

int main()
{
	int n;
	
	cout<<"Enter any number : ";
	cin>>n;
	
	cout<<"Sum = "<<sum(n);
		
	return 0;
}

