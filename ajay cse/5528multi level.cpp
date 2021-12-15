#include<iostream>
using namespace std;
class b1
{
	protected:
		string name;
		int number;
};
class d1:public b1
{
	protected:
		int s1,s2,s3,s4,s5;
};
class d2:public d1
{
	protected:
		int total;
		float avg;
    public:
    	void getdata()
    	{
    		cout<<"enter name:";
    		cin>>name;
    		cout<<"enter number:";
    		cin>>number;
    		cout<<"enter marks for all 5 subjects:";
    		cin>>s1>>s2>>s3>>s4>>s5;
    		total=s1+s2+s3+s4+s5;
    		avg=total/3;
		}
		void displaydata()
		{
			cout<<"name="<<name;
			cout<<"number="<<number;
			cout<<"s1="<<s1;
			cout<<"s2="<<s2;
			cout<<"s3="<<s3;
			cout<<"s4="<<s4;
			cout<<"s5="<<s5;
			cout<<"total="<<total;
			cout<<"avg="<<avg;
			
		}
};
main()
{
	d2 o1;
	o1.getdata();
	o1.displaydata();
}
