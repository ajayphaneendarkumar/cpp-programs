#include<iostream>
using namespace std;
class bin_add
{
	private:
		int a,b;
	public:
		void input()
		{
		   cout<<"enter a,b values:";
		   cin>>a>>b;
		}
		void operator +(bin_add o4)
		{
			bin_add temp;
			temp.a=a+o4.a;
			temp.b=b+o4.b;
			cout<<temp.a<<endl;
			cout<<temp.b<<endl;
		}
};
main()
{
	bin_add o1,o2;
	o1.input();
	o2.input();
	o1+o2;
}
