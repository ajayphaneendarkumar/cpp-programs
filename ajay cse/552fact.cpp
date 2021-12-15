#include<iostream>
using namespace std;
main()
{
	int i,fact,n;
	cout<<"enter n value:";
	cin>>n;
	i=1;
	do
	{
		fact=fact*i;
		i=i+1;
	}while(i<=n);
	cout<<"factorial of a given number is="<<fact<<endl;
}
