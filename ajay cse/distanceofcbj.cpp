#include<iostream>
using namespace std;
class Distance
{
	private:
		int feet;
		int inches;
	public:
		void setdistance()
		{
			cout<<"enter feet:";
			cin>>feet;
			cout<<"enter inches:";
			cin>>inches;
		}
		void getdistance()
		{
			cout<<"distance of feet="<<feet;
			cout<<"inches="<<inches;
		}
		void add(Distance d1,Distance d2)
		{
			feet=d1.feet+d2.feet;
			inches=d1.inches+d2.inches;
			if(inches>=12)
			{
				feet=feet+1;
				inches=inches-12;
			}
			
		}
};
main()
{
   Distance d1,d2,d3;
   d1.setdistance();
   d2.setdistance();
   d3.add(d1,d2);
   d3.getdistance();
}
