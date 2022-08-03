#include<iostream>
using namespace std;

int main()
{
	int vowel=0,sp=0,con=0;
	char str[100];
	
	cout<<"Enter any sentense : ";
	gets(str);
	
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
		{
			vowel++;
		}
		
		else if(str[i]==' ')
		{
			sp++;
		}
		
		else
		{
			con++;
		}
	}
	
	cout<<"No of vowel : "<<vowel<<endl;
	cout<<"No of consonant : "<<con<<endl;
	cout<<"No of space : "<<sp;
	return 0;
}
