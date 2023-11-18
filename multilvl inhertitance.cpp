
// Multi level inheritance

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
		void get(int x, int y){
			a=x; b=y;
		}
};

class def: public abc{
	private:
		int q,e;
	protected:
			int sumc1(){
			return q+e;
		}
	public:
		void getc1(int x, int y){
			q=x; e=y;
		}
};

class ghi:public def{
	private:
		int o,p;
	protected:
		int sumc1c1(){
			return o+p;
		}
	public:
		void getc1c1(int x, int y){
			int a,b,c,d;
			cin>>a>>b>>c>>d;
			get(a,b);
			getc1(c,d);
			o=x; p=y;
		}
		void SUM(){
			cout<<sum()+sumc1()+sumc1c1(); 
	}
};

int main(){
	ghi g;
	int p,q;
	cin>>p>>q;
	g.getc1c1(p,q);
	g.SUM();
}
