//a program that performs basic operations such as a division operation,multiplication ,subtraction and addition

#include<iostream>

#include <cmath>

using namespace std;
int main()
{
	double a;
	double b;
	
	int operation;
	
	cout<<"A SIMPLE CALCULATOR\n"<<endl;
	cout<<"select an operation"<<endl;
	
	cout<<"1.division\n"<<endl;
	cout<<"2.multiplication\n"<<endl;
	cout<<"3.additon\n"<<endl;
	cout<<"4.subtraction\n"<<endl;
	
	cin>>operation;
	
		
	cout<<"enter the value of a"<<endl;
	 cin>>a;
	 
	cout<<"enter the value of b"<<endl;
	  cin>>b;
	
	
	
	switch(operation)
	{
		case 1:cout<<" the answer is \n"<<a/b<<endl;
		break;
		case 2:cout<<" the answer is \n"<<a*b<<endl;
		break;
		case 3:cout<<" the answer is \n "<<a+b<<endl;
		break;	
		case 4:cout<<" the anser is \n "<<a-b<<endl;
	
	default:
		
	cout<<"wrong entry"<<endl;
	
	cout<<'\n';
	
	break;
}


	
	return 0;
	
	
	
		
		
		
		
		
		
		
	}
	
	
	
	
	
	
	
	
	

