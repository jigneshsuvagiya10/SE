#include<iostream>
using namespace std;

int add(int a,int b)
{
	return a+b;
}

int sbt(int a,int b)
{
	return a-b;
}

int mlt(int a,int b)
{
	return a*b;
}

int div(int a,int b)
{
	return a/b;
}

int mod(int a,int b)
{
	return a%b;
 } 

int main()
{
	int a,b,ch;
	
	cout<<"======MENU======"<<endl;
	
	cout<<"1.Addition"<<endl;
	cout<<"2.Substration"<<endl;
	cout<<"3.Multiplication"<<endl;
	cout<<"4.Division"<<endl;
	cout<<"5.Modulo"<<endl;
	
	cout<<endl;
	
	cout<<"Enter your choice : ";
	cin>>ch;
	
	cout<<endl;
	
	cout<<"== Enter two number =="<<endl;
	cin>>a>>b;
		
	switch(ch)
	{
		case 1 : cout<<"Addition = "<<add(a,b);
				 break;
				 
		case 2 : cout<<"Substraction = "<<sbt(a,b);
				 break;
				 
		case 3 : cout<<"Multiplication = "<<mlt(a,b);
		  		 break;
				   
		case 4 : cout<<"Division = "<<div(a,b);
				 break;
				 
		case 5 : cout<<"Modulo = "<<mod(a,b);
				 break;
				 
		default : cout<<"Wrong choise";		 		 
				   		 		 
	}
	
	return 0;
}



