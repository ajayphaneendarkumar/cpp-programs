#include<iostream>
using namespace std;
class area
{
	private:
		int l,b,area;
	public:
		void getarea()
		{
			cout<<"enter length and breadth values:";
			cin>>l>>b;
			area=l*b;
			cout<<"area of rectangle is="<<area;
		}
		
};
main()
{
	area a1,a2,a3;
	a1.getarea();
	a2.getarea();
	a3.getarea();
}
