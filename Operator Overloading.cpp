// Bianry operator overloading

// Binary <+>
/*#include<iostream>
using namespace std;
class binary{
	int x; int y;
	public:
		binary(){
			x=0; y=0;
		}
		binary(int a, int b){
			x=a;
			y=b;
		}
		// can be declared as a friend function also syntax:- friend binary operator+(binary,binary); binary,binary for parameter data types
		friend binary operator+(binary,binary);
		/*binary operator+(binary obj){ 
			binary temp;
			temp.x=x+obj.x;
			temp.y=y+obj.y;
			return temp;
		}
		void showdata(){
			cout<<x<<"+"<<y<<"="<<x+y;
		}
};
binary operator+(binary obj1,binary obj2){
			binary temp;
			temp.x=obj2.x+obj1.x;
			temp.y=obj2.y+obj1.y;
			return temp;
		}
int main(){
	binary obj1(1,4), obj2(1,2), obj3;
	obj3=obj2+obj1; // can also use obj3=obj1.operator+(obj2);
	obj3.showdata();
	return 0;
}
*/


// Binary <*>
/*#include<iostream>
using namespace std;
class binary{
	int x; int y;
	public:
		binary(){
			x=0; y=0;
		}
		binary(int a, int b){
			x=a;
			y=b;
		}
		// can be declared as a friend function also syntax:- friend binary operator+(binary,binary); binary,binary for parameter data types
		friend binary operator*(binary,binary);
		/*binary operator+(binary obj){ 
			binary temp;
			temp.x=x+obj.x;
			temp.y=y+obj.y;
			return temp;
		}
		void showdata(){
			cout<<x<<"*"<<y<<"="<<x*y;
		}
};
binary operator*(binary obj1,binary obj2){
			binary temp;
			temp.x=obj2.x*obj1.x;
			temp.y=obj2.y*obj1.y;
			return temp;
		}
int main(){
	binary obj1(1,4), obj2(1,2), obj3;
	obj3=obj2*obj1; // can also use obj3=obj1.operator*(obj2);
	obj3.showdata();
	return 0;
}*/
// Binary <*>

/*#include<iostream>
using namespace std;
class binary{
	int x; int y;
	public:
		binary(){
			x=0; y=0;
		}
		binary(int a, int b){
			x=a;
			y=b;
		}
		// can be declared as a friend function also syntax:- friend binary operator+(binary,binary); binary,binary for parameter data types
		friend binary operator/(binary,binary);
		/*binary operator+(binary obj){ 
			binary temp;
			temp.x=x+obj.x;
			temp.y=y+obj.y;
			return temp;
		}
		void showdata(){
			cout<<x<<"/"<<y<<"="<<x/y;
		}
};
binary operator/(binary obj1,binary obj2){
			binary temp;
			temp.x=obj2.x/obj1.x;
			temp.y=obj2.y/obj1.y;
			return temp;
		}
int main(){
	binary obj1(4,1), obj2(2,1), obj3;
	obj3=obj2/obj1; 
	obj3.showdata();
	return 0;
}*/
// Binary ( > )
#include<iostream>
using namespace std;
class binary{
	int x; int y;
	public:
		binary(){
			x=0; y=0;
		}
		binary(int a, int b){
			x=a;
			y=b;
		}
		// can be declared as a friend function also syntax:- friend binary operator+(binary,binary); binary,binary for parameter data types
		friend bool operator>(binary,binary);
		/*bool operator>(binary obj){
			if(x>=obj.x && y>=obj.y) return true;
			return false;
		}*/
};
bool operator>(binary obj1,binary obj2){
			if(obj1.x>=obj2.x && obj1.y>=obj2.y) return true;
			return false;
		}
int main(){
	binary obj1(1,4), obj2(1,2); bool comp;
	comp=obj1>obj2; 
	cout<<comp;
	return 0;
}
