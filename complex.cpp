#include<iostream>
using namespace std;

class complex
{
	public:
		float real,imag;
		
		complex()
		{
			real=0;
			imag=0;
		}
		
		complex operator +(complex);
		complex operator *(complex);
		friend istream &operator>>(istream&, complex&);
		friend ostream &operator<<(ostream&, complex&);
};

complex complex::operator +(complex obj)
{
	complex temp;
	temp.real=real+obj.real;
	temp.imag=imag+obj.imag;
	return(temp);
}

complex complex::operator *(complex obj)
{
	complex temp;
	temp.real=(real*obj.real)-(imag*obj.imag);
	temp.imag=(real*obj.imag )+(imag+obj.imag);
	return(temp);
 } 
 
istream &operator>>(istream& is,complex& obj)
{
	is>>obj.real;
	is>>obj.imag;
	return is;
}

ostream &operator<<(ostream&os, complex& obj)
{
	os<<obj.real;
	os<<"+"<<obj.imag<<"i";
	return os;
}

int main()
{
	complex a,b,c,d;
	
	cout<<"Enter the first complex number :"<<endl;
	cin>>a;
	cout<<"Enter the second complex number :"<<endl;
	cin>>b;
	cout<<"Arithmatic operations"<<endl;
	
	c=a+b;
	cout<<"Addition is :"<<c<<endl;
	d=a*b;
	cout<<"Multiplication is :"<<d<<endl;
	return 0;
}
