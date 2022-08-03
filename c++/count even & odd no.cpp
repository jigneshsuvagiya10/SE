#include<iostream>
using namespace std;

//count even & odd number

int main()
{
	int a[10],i,e_count=0,o_count=0;
	
	for(i=0;i<10;i++)
	{
		cout<<"Enter element : ";
		cin>>a[i];
		
		if(a[i]%2==0)
		{
			e_count++;
		}
		else
		{
			o_count++;
		}
	}
	
	cout<<"Total even elements : "<<e_count<<endl;
	cout<<"Total odd elements : "<<o_count;
	
	return 0;
}
