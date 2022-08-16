#include<iostream>
#include<cstring>
using namespace std;

class stack
{
	public:
	char a[20];
	int n=20,tos=-1;
	void push(char val)
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
		tos--;
		}
	}
	void check(char ch)
	{

		switch(ch)
		{
		case '}':
		if(a[tos]=='{')
		{
		pop();
		}
		break;
		case ')':
		if(a[tos]=='(')
		{
		pop();
		}
		break;
		case ']':
		if(a[tos]=='[')
		{
		pop();
		}
		break;
		}
	}
	int display()
	{
		return tos;
	} 
};

int main()
{

	stack s;
	char a[10];
	int i,flag=0;
	cout<<"enter the string";
	cin>>a;
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]=='(' || a[i]=='[' || a[i]=='{')
		{
		s.push(a[i]);
		}
		else if(a[i]=='}'||a[i]==']'||a[i]==')')
		{
		s.check(a[i]);
		}
		else
		{
		cout<<a[i]<<" ";
		}
		
		
	}
	if(a[i]=='\0')
	{
	i=s.display();
	
	if(i==-1)
	{
	flag=1;
	}
	}
	
	if(flag!=1)
	{
	cout<<"unbalanced sequence of paranthesis";
	}
	else
	{
	cout<<"balanced sequence of paranthesis";
	}
	
	return 0;
}

	
	


