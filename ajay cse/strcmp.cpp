#include<iostream>
#include<cstring>
using namespace std;
main()
{
	char str1[20];
	char str2[10];
	int difference;
	//char str3[30];
	cout<<"Enter string1: ";
	cin>>str1;
	cout<<"Enter string2: ";
	cin>>str2;
	difference=strcmp(str1,str2);
	if(difference==0)
	{
		cout<<"both strings are same";
	}
	else
	{
		cout<<"difference";
	}
	
}
