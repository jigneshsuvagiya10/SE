#include<iostream>
using namespace std;

int main()
{
	int ch=0,space=0;
	char str[100];
	
	cout<<"Enter any sentence : ";
	gets(str);
	
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
		{
			space++;
		}
		
		else
		{
			ch++;
		}
	}
	
	cout<<"No of chractors : "<<ch<<endl;
	cout<<"No of space : "<<space;
	
	return 0;
}
