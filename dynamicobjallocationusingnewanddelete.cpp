#include <iostream>
using namespace std;  
class Complex
{
	private:
		int real,imag;
	public:
		Complex(int,int);
		Complex();
		~Complex();
		void display();
};
inline Complex::Complex(int real,int imag)
{
	Complex::real=real;
	Complex::imag=imag;
	
}
inline Complex::Complex()
{
	
}
inline Complex::~Complex()
{
	
}
inline void Complex::display()
{
	cout<<endl<<"The complex number is: "<<real<<"+"<<imag<<"i";
}
int main()
{
	Complex *c;
	int i;
	c=new Complex [3] {{2,3},{4,5},{3,4}}; //initializes and allocates memory for 3 objects
	for(i=0;i<3;i++)
	{
		c[i].display();
	}
	delete []c;
	return 0;
}

