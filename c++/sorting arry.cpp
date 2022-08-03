#include<iostream>
using namespace std;

int main()
{
	int arr[5],a,i,temp;
	
	cout<<"Enter number of elements : ";
	cin>>a;
	
	cout<<"Enter elements : "<<endl;
	
	for(i=0;i<a;i++)
	{
		cin>>arr[i];
	}
	
	for(i=0;i<a;i++)
	{
		for(int j=i+1;j<a;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	
		cout<<"sorting in ascending order"<<endl;
		
	for(i=0;i<a;i++)
	{
		cout<<arr[i]<<endl;
	}
	
	return 0;
}
