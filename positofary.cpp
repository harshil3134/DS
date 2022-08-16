#include<iostream>
using namespace std;
int main()
{
	int i,n;
	int a[5];
	for(i=0;i<5;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<5;i++)
	{
		cout<<(a+i)<<endl;
	}
	cout<<("enter the position for what you want to find address");
	cin>>n;
	//cout<<&a+sizeof(int)*n;
	
cout<<"add="<<a+n;
return 0;
}
