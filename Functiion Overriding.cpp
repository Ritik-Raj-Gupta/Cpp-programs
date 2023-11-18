
// Function overriding

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
			cout<<"Parent class";
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
		void get(int x, int y){
			q=x; e=y;
			cout<<"child class";
		}
};

int main(){
	def d;
	d.get(10,20);
	cout<<endl;
	d.abc::get(20,30);
	return 0;
}
