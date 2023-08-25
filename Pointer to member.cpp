// (obj.*ptr)(parameters)
#include<iostream>
using namespace std;
class A{
	public:
		int x;
		int y;
		void f(int a){
			cout<<"Value of x is: "<<a<<endl;
		}
		void f1(int a){
			cout<<"Value of y is: "<<a<<endl;
		}
};
int main(){
	A obj;
	int A::*(ptr)=&A::x;
	int A::*(ptr2)=&A::y;
	void (A::*ptr3)(int)=&A::f;
	void (A::*ptr4)(int)=&A::f1;
	(obj.*ptr3)(4);
	(obj.*ptr4)(5);
	return 0;
}

