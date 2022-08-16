#include<iostream>
using namespace std;
int a[100],n=100,tos=-1;
void push(int val)
{
	if(tos>=n-1)
	{
	cout<<"stack is overloaded"<<endl;
	}
	else
	{
	tos++;
	a[tos]=val;
	}
}
void pop()
{
	if(tos<=-1)
	{
	cout<<"stack is underflow"<<endl;
	}
	else
	{
	cout<<"the popped element is "<<a[tos]<<endl;
	 tos--;
	}
}
void display()
{
	if(tos>=0)
	{
	cout<<"stack elements are:\n";
	for(int i=tos;i>=0;i--)
	cout<<a[i]<<" "<<endl;
	}
	else
	{
	cout<<"stack is empty ";
	}
}
	 

int main()
{

int choice,val;

while(choice!=4)
{
	cout<<"enter the choice:1.push 2.pop 3.display 4.exit"<<endl;
	cin>>choice;
	switch(choice)
{
	case 1:
	{
	cout<<"enter the value to be pushed";
	cin>>val;			
	push(val);
	break;
	}
	case 2:
	{
	pop();
	break;
	}
	case 3:
	{
	display();
	break;
	}
	case 4:
	{
	cout<<"exit";
	break;
	}
	default:
	{
		cout<<"enter a valid value";
	}
}
}
	return 0;
}

	
	


