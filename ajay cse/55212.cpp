#include<iostream>
using namespace std;
class parent
{
	public:
		parent()
		{
			cout<<"parent class constructor called"<<endl;
		}
		~parent()
		{
			cout<<"parent class destructor called"<<endl;
		}
};
class child:public parent
{
	public:
	   child()
	   {
		cout<<"child class constructor called"<<endl;
	   }
	   ~child()
	   {
		cout<<"child class destructor called"<<endl;
	   } 
};
main()
{
	child o1;
}
