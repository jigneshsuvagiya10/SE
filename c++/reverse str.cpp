#include<iostream>
#include<string>
using namespace std;

int main()
{
	int le=0;
	char str[100],temp;
	
	cout<<"Enter the string : ";
	gets(str);
	
	for(int i=0;str[i]!='\0';i++)
	{
		le++;
	}
	
	
	for(int i=0;i<=le/2;i++)
	{
		temp=str[i];
		str[i]=str[le-i];
		str[le-i]=temp;
		
	}
	
	cout<<"Revers string : "<<str[100];
	
	return 0;
}
