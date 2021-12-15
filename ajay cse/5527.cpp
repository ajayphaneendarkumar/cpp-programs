#include<iostream>
using namespace std;
class A
{
	protected:
		char name[10];
		int age;
};
class B:public A
{
	public:
		float height;
		int weight;
		void getdata()
		{
			cout<<"enter name and age:\n";
			cin>>name>>age;
			cout<<"enter weight and height:\n";
			cin>>weight>>height;
		}
		void show()
		{
			cout<<"Name="<<name<<endl;
			cout<<"Age="<<age<<endl;
			cout<<"weight="<<weight<<endl;
			cout<<"height="<<height<<endl;
		}
		
};
int main()
{
	B c;
	c.getdata();
	c.show();
}
