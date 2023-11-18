
// Hieriarichial inheritance

#include<iostream>
using namespace std;

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
		void Sum(){
			cout<<sum()+sumc1();
		}
};

class qwe:public abc{
	private:
		int x,y;
	protected:
		int sumc2(){
			return x+y;
		}
	public:
		void getc2(){
			cout<<"Enter xc2: ";
			cin>>x;
			cout<<"Enter yc2: ";
			cin>>y;
			get();
		}
		void Sum(){
			cout<<sum()+sumc2();
		}
};

class rty:public abc{
	private:
		int x,y;
	protected:
		int sumc3(){
			return x+y;
		}
	public:
		void getc3(){
			cout<<"Enter xc3: ";
			cin>>x;
			cout<<"Enter yc3: ";
			cin>>y;
			get();
		}
		void Sum(){
			cout<<sum()+sumc3();
		}
};

int main(){
	def a; qwe q; rty r;
	a.getc1();
	q.getc2();
	r.getc3();
	cout<<"Child 1\n";
	a.Sum();
	cout<<endl;
	cout<<"Child 2\n";
	q.Sum();
	cout<<endl;
	cout<<"Child 3\n";
	r.Sum();
}

