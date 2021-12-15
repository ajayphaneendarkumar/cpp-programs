#include<iostream> //hierarchial inheritance
using namespace std;
class b1
{
	protected:
		int a,b;
	public:
		void getdata()
		{
			cout<<"enter a,b values:";
			cin>>a>>b;
		}
};
class add:public b1
{
	private:
		int addition;
	public:
		void getaddition()
	    {
	    	addition=a+b;
	    	cout<<"addition of a&b is="<<addition<<endl;
		}
};
class mul:public b1
{
	private:
		int multi;
	public:
		void getmulti()
		{
			multi=a*b;
			cout<<"multiplication of a&b is="<<multi<<endl;
		}
};
main()
{
	add o2;
	o2.getdata();
	o2.getaddition();
	mul o3;
	o3.getdata();
	o3.getmulti();
}
