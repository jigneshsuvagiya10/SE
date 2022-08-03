#include<iostream>
using namespace std;

int main()
{
	int disit=0,alp=0,sp=0;
	char str[100];
	
	cout<<"Enter the string : ";
	gets(str);
	
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]>='0' && str[i]<='9')
		{
			disit++;
		}
		
		else if(str[i]>='A' && str[i]<='z' || str[i]>='a' && str[i]<='z')
		{
			alp++;
		}
		
		else if(str[i]==' ')
		{
			sp++;
		}
	}
	
	cout<<"No of disits : "<<disit<<endl;
	cout<<"No of alphabets : "<<alp<<endl;
	cout<<"No of space : "<<sp;
	
	
	return 0;
}
