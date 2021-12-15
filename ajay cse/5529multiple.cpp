#include<iostream>  //multiple inheritance
using namespace std;
class b1
{
	protected:
	    string name;
	    int number;
};
class b2
{
	protected:
		float CGPA;
		float SGPA;
};
class d1:protected b1,protected b2
{
	protected:
		char grade;
	public:
		void getdata()
		{
			cout<<"enter name:";
			cin>>name;
	        cout<<"enter number:";
	        cin>>number;
	        cout<<"enter CGPA:";
	        cin>>CGPA;
	        cout<<"enter SGPA:";
	        cin>>SGPA;
	        displaydata();
	        if(CGPA>=8.0)
	        {
	        	cout<<"grade=A";
			}
			else if(CGPA>=7.0 && CGPA<8.0)
			{
				cout<<"grade=B";
			}
			else if(CGPA>=6.0 && CGPA<7.0)
			{
				cout<<"grade=C";
			}
			else
			{
				cout<<"fail";
			}
		}
		void displaydata()
		{
			cout<<"name="<<name;
			cout<<"number="<<number;
			cout<<"CGPA="<<CGPA;
			cout<<"SGPA="<<SGPA;
		}
	};
	main()
	{
		d1 o1;
		o1.getdata();
		o1.displaydata();
	}

