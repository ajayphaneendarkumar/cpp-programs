#include<iostream>
using namespace std;
class minus_plus
{
	private:
		int a,b;
	public:
		void getdata()
		{
			cout<<"enter a,b values:";
			cin>>a>>b;
		}
		void operator +()
		{
			a=+a;
		}
		void operator -()
		{
			b=-b;
		}
		void display()
		{
			cout<<"a="<<a;
			cout<<"b="<<b;
		}
};
main()
{
	minus_plus o1;
	o1.getdata();
	+o1;
	-o1;
	o1.display();
}
