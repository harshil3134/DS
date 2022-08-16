#include<iostream>
using namespace std;
int *ptr;
int main()
{
	int n,i=0,x,val;
	int choice;
	
		
	cout<<"enter the number of elements for array"<<endl;
	cin>>n;
	ptr=new int[n];
	int a[n];
	void create(int a[],int n);
	//insert
	int insert(int a[],int n);
	//display
	void display(int a[],int n);
	//delete
	void del(int a[],int n);
	
	
                    while(i!=1)
	{
	cout<<"enter your choice  \n 1.create \n 2.insert \n 3.delete \n 4.display \n 5.exit"<<endl;
	cin>>choice;
	switch(choice)
	{
	case 1:
	create(ptr,n);
	break;
	
	case 2:
	n=insert(ptr,n);
	break;
	
	case 3:
	del(a,n);
	break;

	case 4:
	display(ptr,n);
	break;
	
	case 5:
	cout<<"exit";
	i=1;
	}
	}
	
	
			
	return 0;
}
	void create(int ptr[],int n)
	{
		int i;
		 
		cout<<"enter the value"<<endl;
		for (i=0;i<n;i++)
		{
		cin>>ptr[i];
		}
	}
	int insert(int ptr[],int n)
	{	
	
		int x,val,i;
		
		cout<<"enter index you want insert number:"<<endl;
		cin>>x;
		n++;
		
		for(i=n;i>x-1;i--)
		{ 
			ptr[i]=ptr[i-1];
		}
	  	cout<<"enter the value ";
	   	cin>>val;
	   	ptr[x]=val;
	   	return n;
	  }
	  
	  void del(int *a,int n)
	 { 
		 int x,i;
		cout<<"enter index you want to delete"<<endl;
		cin>>x;
		for(i=x;i<n;i++)
		{ 
			a[i]=a[i+1];
		}
		a[n]=0;
	}
	
	   void display(int ptr[],int n)
	   {
	   
		   int i;
		   cout<<"displying ..."<<endl;
		for (i=0;i<n;i++)
		{
		cout<<ptr[i]<<endl;
		}
	}


