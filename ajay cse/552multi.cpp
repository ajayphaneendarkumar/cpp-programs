#include<iostream>
using namespace std;
main()
{
	int n,i;
	cout<<"enter n value:";
	cin>>n;
	cout<<"multiplication table for value"<< n <<"is=";
	for(i=1;i<=n;i++)
	{
		cout<<n<<"*"<<i<<"="<<n*i;
	}
}
