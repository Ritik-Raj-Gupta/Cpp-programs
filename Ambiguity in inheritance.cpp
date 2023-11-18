
// Function with same name for multiple inheritance
// SOLUTION-> use scope resolution operator | SYNTAX <derived class>.<base class>::<funcname>;
/*
#include<iostream>
using namespace std;

// def -> abc
// rty
// iop -> def + rty
class abc{
	private:
		int a,b;
	protected:
		int sum(){
			return a+b;
		}
	public:
		void get(){
			cout<<"Enter x: ";
			cin>>a;
			cout<<"Enter y: ";
			cin>>b;
		}
};


class rty{
	private:
		int x,y;
	protected:
		int sum(){
			return x+y;
		}
	public:
		void get(){
			cout<<"Enter X: ";
			cin>>x;
			cout<<"Enter Y: ";
			cin>>y;
		}
};

class iop:public abc,public rty{
	private:
		int x,y;
	protected:
		int sum(){
			return x+y;
		}
	public:
		void getC(){
			cout<<"Enter xC: ";
			cin>>x;
			cout<<"Enter yC: ";
			cin>>y;
			rty::get();
			abc::get();
		}
		void SUM(){
			cout<<rty::sum()+sum()+abc::sum();
		}
};

int main(){
	iop obj;
	obj.getC();
	obj.SUM();
}
*/

// Diamond problem <in hybrid inheritance>
//SOLUTION-> use virtual keyword for each child class of the problematic parent class | SYNTAX-> class name:public virtual parclass{};
// e.g. class B and C below
#include<iostream>
using namespace std;

class A{
	protected:
		int x;
	public:
		void show(){
			cout<<"CLASS a";
		}
};

class B:public virtual A{
	protected:
		int x;
	public:
		void getb(){
			cin>>x;
		}
};

class C:public virtual A{
	protected:
		int x;
	public:
		void getc(){
			cin>>x;
		}
};

class D:public B,public C{
	protected:
		int x;
	public:
		void getd(){
			cin>>x;
		}
		void show_data(){
			show();
		}
};

int main(){
	D obj;
	obj.getd();
	obj.show_data();
	return 0;
}
