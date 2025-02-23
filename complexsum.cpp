#include <iostream>
using namespace std;

class Complex
{
	private:
		int real,imag;
	public:
		Complex(int,int);
		~Complex();
		Complex();
		Complex add(Complex);
		void Display();
				
};

Complex::Complex(int real,int imag)
{
	Complex::real=real;
	Complex::imag=imag;	
}

Complex::Complex()
{
	
}

Complex::~Complex()
{
	
}

inline Complex Complex::add(Complex c)
{
	Complex t;
	t.real=real+c.real;
	t.imag=imag+c.imag;
	return t;
	
	
}

inline void Complex::Display()
{
	cout<<"The sum is: ";
	cout<<real<<"+"<<imag<<"i";
	
}

int main()
{
	int r1,i1,r2,i2;
	cout<<"Enter real of 1st no.: ";
	cin>>r1;
	cout<<"Enter imag of 1st no.: ";
	cin>>i1;
	cout<<"Enter real of 2nd no.: ";
	cin>>r2;
	cout<<"Enter imag of 2nd no.: ";
	cin>>i2;
	Complex c1(r1,i1),c2(r2,i2),c3;
	c3=c1.add(c2);
	c3.Display();
	return 0;
}


