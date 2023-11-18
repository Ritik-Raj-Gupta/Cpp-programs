// CONSTRUCTOR
// syntax-> classname(parameters){body};
// constructor is a member function of class with name same as class and no return type not even void
// constructor must be public or else class will become private as when  we create and object of class the constructor is called first
// if no constructor made then a blank constructor is created i.e. constructor with no parameters and body
// function overloading is applicable to constructor also
// called only for object creation not for pointer creation
// If we write any constructor, then compiler doesn't create the default constructor.
#include<iostream>
using namespace std;

class RECT{
	int l;
	int b;
	public:
	RECT(){ // Unparameterisd / default constructor
		l=5;b=6;
	}
	RECT(int x,int y){ // parameterised constructor -> default parameters can also be given
		l=x;b=y;
	}
	RECT(RECT &ob){ // copy constructor -> creates a copy of object passes as parameter
		l=ob.l; b=ob.b;
	}
	void area(){
		cout<<"area is: "<<l*b<<endl;; 
	}
};

int main(){
	RECT r1;
	r1.area();
	int x,y;
	cin>>x>>y;
	RECT r2(x,y);
	r2.area();
	RECT r3(r2); // copy constructor called to create r3 as copy of r2
	r3.area();
	RECT r4=r2; // alternative method for creating copy of obj
	r4.area();
	return 0;
}
