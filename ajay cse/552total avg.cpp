#include<iostream>
using namespace std;
main()
{
	int a,b,c,d,e,f,avg,sum;
	cout<<"enter a,b,c,d,e,f values:";
	cin>>a>>b>>c>>d>>e>>f;
	sum=a+b+c+d+e+f;
	avg=sum/6;
	cout<<sum;
	cout<<"avg="<<avg;
	if(avg<=100 && avg>=90)
	{
		cout<<"grade=A+";
	}
	else if(avg<=90 && avg>=80)
	{
		cout<<"grade=A";
	}
	else if(avg<=80 && avg>=70)
	{
		cout<<"grade=B";
	}
	else
	{
		cout<<"fail";
	}
}
