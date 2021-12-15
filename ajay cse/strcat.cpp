#include<iostream>
#include<cstring>
using namespace std;
main()
{
	char s1[10],s2[10],*s3;
	cout<<"enter a string1:";
	cin>>s1;
	cout<<"enter a string2:";
	cin>>s2;
	s3=strcat(s1,s2);
	cout<<"concatenation of string1 and string2 is:"<<s3;
}
