// DESTRUCTOR
// only one for a class, has no parameters, body is optional
// syntax-> ~classname(){body}; // body not mandatory
/* called automatically after i>the scope of the object gets over 
						      ii>program ends
						      iii> object is deleted*/
// executed in opposite order of constructor calling i.e. last constructor object deleted first
#include<iostream>
using namespace std;

class Dest{
	int l; int b; static int cr; static int dr;
	public:
		Dest(int x, int y){
			l=x;
			b=y;
			cr++;
		}
		~Dest(){
			dr++;
		};
		void check(){
			cout<<"Number of rectangles: "<<cr<<endl;
			cout<<"Number of rectangles deleted: "<<dr<<endl<<endl;
		}
};

int Dest::cr=0;
int Dest::dr=0;

int main(){
	int x,y;
	cin>>x>>y;
	Dest a(x,y);
	Dest b(x,y);
	a.check();
	{
	Dest c(x,y);
	Dest d(x,y);
	c.check(); // created=4 destroyed=0 (destructor hasn't been called)
	} // destructor for c and d is called after '}' 
	a.check(); // created=4 destroyed=2 (as destructor is called 2 imes for c and d)
	return 0;
}
