#include<iostream>
using namespace std;

int main()
{
	int upper=0,lower=0;
	char str[100];
	
	cout<<"Enter the string : ";
	gets(str);
	
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]>='A' && str[i]<='Z')
		{
			upper++;
		}
		
		else if(str[i]>='a' && str[i]<='z')
		{
			lower++;
		}
	}
	
	cout<<"Uppercase letters : "<<upper<<endl;
	cout<<"Lowercase letters : "<<lower;
	
	return 0;
}
