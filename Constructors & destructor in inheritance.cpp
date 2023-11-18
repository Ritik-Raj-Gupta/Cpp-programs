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
		abc(){
			cout<<"Parent1 class constructor!\n";
		}
		~abc(){
			cout<<"Parent1 class destructor!\n";
		}
		void get(int x, int y){
			a=x; b=y;
			cout<<"Parent class";
		}
};

class qwe{
	private:
		int a,b;
	protected:
		int sum(){
			return a+b;
		}
	public:
		qwe(){
			cout<<"Parent2 class constructor!\n";
		}
		~qwe(){
			cout<<"Parent2 class destructor!\n";
		}
		void get(int x, int y){
			a=x; b=y;
			cout<<"Parent class";
		}
};

class rty{
	private:
		int a,b;
	protected:
		int sum(){
			return a+b;
		}
	public:
		rty(){
			cout<<"Virtual parent class constructor!\n";
		}
		~rty(){
			cout<<"Virtual parent class destructor!\n";
		}
		void get(int x, int y){
			a=x; b=y;
			cout<<"Parent class";
		}
};

class def: public abc,public qwe,public virtual rty{
	private:
		int q,e;
	protected:
			int sumc1(){
			return q+e;
		}
	public:
		def(){
			cout<<"Child class constructor!\n";
		}
		~def(){
			cout<<"Child class destructor!\n";
		}
		void get(int x, int y){
			q=x; e=y;
			cout<<"child class";
		}
};

int main(){
	def d;
	return 0;
}
