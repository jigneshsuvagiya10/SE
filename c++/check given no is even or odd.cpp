#include<iostream>
using namespace std;

//check given number is even or odd

int main()
{
	int a[5],i;
	
	for(i=0;i<5;i++)
	{
		cout<<"Enter elements : ";
		cin>>a[i];
		
		if(a[i]%2==0)
		{
			cout<<"Even"<<endl;
		}
		else
		{
			cout<<"Odd"<<endl;
		}
	}
	return 0;
}
