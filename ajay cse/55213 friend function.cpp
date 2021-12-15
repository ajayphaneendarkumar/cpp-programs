#include<iostream>
using namespace std;
class B;
class A
{
	private:
		int a;
	public:
		void data1()
		{
			cout<<"enter a value:";
			cin>>a;
		}
		//friend returndatatype functionname(parameters)
		friend void compare(A,B);
};
class B
{
	private:
		int b;
	public:
		void data2()
		{
			cout<<"enter b value:";
			cin>>b;
		}
		friend void compare(A,B);
};
//return datatype functionname()
void compare(A o1,B o2)
{
	if(o1.a<o2.b)
	{
		cout<<"a is lessthan b"<<endl;
	}
	else if(o1.a>o2.b)
	{
		cout<<"a is greaterthan b"<<endl;
	}
	else
	{
		cout<<"a is equal to b"<<endl;
	}
}
main()
{
	A o1;
	B o2;
	o1.data1();
	o2.data2();
	compare(o1,o2);
}
