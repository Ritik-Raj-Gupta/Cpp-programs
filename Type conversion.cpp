
// Use parametrised constructr for <basic to class> or <class to class> conversion
// For class to basic we use SYNTAX: operator datatype(){ return datatype_value; }

// basic to class
/*
#include<iostream>
using namespace std;

class ABC{
	private:
		int x;
	public:
		ABC(){ x=0;
		}
		ABC(int x){
			this->x=x;
		}
		void show(){
			cout<<x;
		}
};

int main(){
	ABC a;
	int q=100;
	a=q;
	a.show();
	return 0;
}
*/

// class to basic
/*
#include<iostream>
using namespace std;
class ABC{
	private:
		int x;
	public:
		ABC(){ x=0;
		}
		ABC(int x){
			this->x=x;
		}
		void show(){
			cout<<x;
		}
		operator int(){
			int d=x;
			return x;
		}
};

int main(){
	ABC a(100);
	int q;
	q=a;
	cout<<q;
	return 0;
}*/

// class to class
#include<iostream>
using namespace std;
class ABC{
	private:
		int x;
	public:
		ABC(){ x=0;
		}
		ABC(int x){
			this->x=x;
		}
		int get(){
			return x;
		}
		void show(){
			cout<<x;
		}
};
class abc{
	private:
		int x;
	public:
		abc(){ x=0;
		}
		abc(ABC a){
			x=a.get();
		}
		void show(){
			cout<<x;
		}
};

int main(){
	ABC a(100); abc b;
	b=a;
	b.show(); 
	cout<<endl;
	a.show();
	return 0;
}
