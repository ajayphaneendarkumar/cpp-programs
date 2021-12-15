#include<iostream> //hybrid inheritance
using namespace std;
class details
{
	protected:
		string name;
		int number;
	public:
		void getdetails()
		{
			cout<<"enter name:";
			cin>>name;
			cout<<"enter number:";
			cin>>number;
		}
};
class marks:public details
{
	protected:
		int intermarks;
	public:
		void getmarks()
		{
			cout<<"enter intermarks:";
			cin>>intermarks;
		}
		void displaymarks()
		{
			cout<<"name="<<name<<endl;
			cout<<"number="<<number<<endl;
			cout<<"intermarks="<<intermarks<<endl;
		}
};
class emarks
{
	protected:
		int eamcetmarks;
	public:
		void getemarks()
		{
			cout<<"enter eamcetmarks:";
			cin>>eamcetmarks;
		}
		void displayemarks()
		{
			cout<<"eamcetmarks="<<eamcetmarks<<endl;
		}
};
class finalmarks:public emarks,public marks
{
	protected:
		int total1,total2,ftotal;
	public:
		void getfinalmarks()
		{
			total1=intermarks*0.25;
			total2=eamcetmarks*0.75;
			ftotal=total1+total2;
		}
		void total()
		{
			cout<<"total="<<ftotal<<endl;
		}
};
main()
{
	finalmarks o1;
	o1.getdetails();
	o1.getmarks();
	o1.getemarks();
	o1.getfinalmarks();
	o1.displaymarks();
	o1.displayemarks();
	o1.total();
	
}
