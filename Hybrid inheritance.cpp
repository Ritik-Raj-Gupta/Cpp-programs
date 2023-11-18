
// Hybrid inheritance

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

class def:public abc{
	private:
		int x,y;
	protected:
		int sumc1(){
			return x+y;
		}
	public:
		void getc1(){
			cout<<"Enter xc1: ";
			cin>>x;
			cout<<"Enter yc1: ";
			cin>>y;
			get();
		}
		int Sum(){
			return sum()+sumc1();
		}
};

class rty{
	private:
		int x,y;
	protected:
		int sumb2(){
			return x+y;
		}
	public:
		void getb2(){
			cout<<"Enter X: ";
			cin>>x;
			cout<<"Enter Y: ";
			cin>>y;
		}
};

class iop:public def,public rty{
	private:
		int x,y;
	protected:
		int sumC(){
			return x+y;
		}
	public:
		void getC(){
			cout<<"Enter xC: ";
			cin>>x;
			cout<<"Enter yC: ";
			cin>>y;
			getc1();
			getb2();
		}
		void SUM(){
			cout<<sumb2()+Sum()+sumC();
		}
};

int main(){
	iop obj;
	obj.getC();
	obj.SUM();
}
