#include<iostream>
using namespace std;

//sum of even & odd number

int main()
{
	int a[10],i,e_sum=0,o_sum=0;
	
	for(i=0;i<10;i++)
	{
		cout<<"Enter elements : ";
		cin>>a[i];
		
		if(a[i]%2==0)
		{
			e_sum+=a[i];
		}
		else
		{
			o_sum+=a[i];
		}
	}
	
	cout<<"Sum of even number : "<<e_sum<<endl;
	cout<<"Sum of odd number : "<<o_sum;
	
	return 0;
}
