#include<iostream>
using namespace std;
 int main()
{
	system("cls");
	system("Color  C0"); 
	int num1,num2,result;
	int choice;
	cout<<"Simple Calculator\n";
	cout<<"Input any two numbers:\n"<<endl;
	cin>>num1>>num2;
	while(1)
	{
	
	cout<<"enter your choice of operation:\n";
	cout<<"1.ADDITION"<<endl;
	cout<<"2.SUBTRACTION"<<endl;
	cout<<"3.MULTIPLICATION"<<endl;
	cout<<"4.DIVISION"<<endl;
	cout<<"5.EXIT";
	cin>>choice;
	switch(choice)
	{
		case 1:
		result=num1+num2;
		cout<<"Addition is:"<<result<<endl;
		break;
		case 2:
		result=num1-num2;
		cout<<"Subtraction is:"<<result<<endl;
		break;
		case 3:
		result=num1*num2;
		cout<<"Multiplication is:"<<result<<endl;
		break;
		case 4:
		result=num1/num2;
		cout<<"Division is:"<<result<<endl;
		break;
		case 5:
			exit(1);
			break;
		default:
		cout<<"invalid choice:";
		break;
			
}
	}
	return 0;
	
}
