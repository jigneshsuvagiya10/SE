#include<iostream>
using namespace std;

int main()
{
	char name[100];
	int len=0;
	
	cout<<"Enter name : ";
	gets(name);
	
	for(int i=0;name[i]!='\0';i++)
	{
		len++;
	}
	
	cout<<"Total length = "<<len;
	return 0;
}
