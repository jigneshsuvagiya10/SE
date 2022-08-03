#include<iostream>
using namespace std;

int main()
{
	int rev=0,x,number,a=0;
	
	cout<<"Enter any number : ";
	cin>>number;
	
	x=number;
	
	while(number!=0)
	{
		a=number%10;
		rev=(rev*10)+a;
		number=number/10;
	}
	
	cout<<"Revers number : "<<rev<<endl;
	
	if(x==rev)
	{
		cout<<"Number is palindrome";
	}
	
	else
	{
		cout<<"Number is not palindrome";
	}
	
	return 0;
}
