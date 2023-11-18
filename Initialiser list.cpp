// INITIALISER LIST
// can be used in place of constructor
// syntax-> classname(parameters) : mem1(p1),mem2(p2),....{}
// assigns value before constructor starts, hence faster

#include<iostream>
using namespace std;

class RECT{
	int l;
	int b;
	public:
	RECT():l(5),b(6){} // Unparameterisd initialiser list
	RECT(int x,int y):l(x),b(y){} // parameterised initialiser list -> default parameters can also be given
	void area(){
		cout<<"area is: "<<l*b<<endl;; 
	}
};

int main(){
	RECT r1;
	r1.area(); // default l=5, b=6
	RECT r2(10,10); // passed l=10, b=10
	r2.area();
	int x,y;
	cin>>x>>y; 
	RECT r3(x,y); // passed l=x, b=y
	r3.area();
	return 0;
}
