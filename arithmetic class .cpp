#include<iostream>
using namespace std;
class arith{
	int x,y;
	public:
		void sum(){
			cout<<"Addition is "<<x+y<<endl;
		}
		void sub(){
			cout<<"Subtraction is "<<x-y<<endl;
		}
		void mul(){
			cout<<"Multiplication is "<<x*y<<endl;
		}
		void div(){
			cout<<"Divison is "<<x/y<<"\n";
		}
		void mod(){
			cout<<"Modulus is "<<x%y<<endl;
		}
		void getdata(){
			int a,b;
			cout<<"Enter two numbers: ";
			cin>>a>>b;
			x=a,y=b;
		}
};
int main(){
	arith a1;
	a1.getdata();
	a1.sum();
	a1.sub();
	a1.mul();
	a1.div();
	a1.mod();
}
