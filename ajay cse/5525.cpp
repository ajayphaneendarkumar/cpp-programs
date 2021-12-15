#include<iostream>
using namespace std;
class assign
{
	private:
		int a;
	public:
		void getdata()
	    {
	    	cout<<"enter a value:";
	    	cin>>a;
		}
		void operator =(assign o3)
		{
			a=o3.a;
			cout<<"a="<<a<<endl;
		}
		
};
main()
{
	assign o1,o2;
	o1.getdata();
	o2=o1;
}
