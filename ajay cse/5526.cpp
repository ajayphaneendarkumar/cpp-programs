#include<iostream>
using namespace std;
class complex
{
	private:
		float real;
		float imag;
	public:
		complex()
		{
		}
		complex(float r,float i)
		{
			real=r;
			imag=i;
		}
		void display()
		{
			cout<<real<<"+i"<<imag;
		}
		friend complex operator +(complex &,complex &);
};
complex operator +(complex &c1,complex &c2)
{
	complex temp;
	temp.real=c1.real+c2.real;
	temp.imag=c1.imag+c2.imag;
	return temp;
}
int main()
{
	complex c1(3,4);
	complex c2(4,6);
	complex c3=c1+c2;
	c3.display();
	return 0;
}

	
