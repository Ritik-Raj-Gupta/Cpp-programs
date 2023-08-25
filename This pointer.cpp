#include<iostream>
using namespace std;

class X{
	int x;
	public:
		void setx(int x){
			//x=x; // x of parameter gets value of x
			this->x=x;// x of class gets balue of parameter x
		}
		void getx(){
			cout<<x;
		}
}obj;

int main(){
	int x;
	cin>>x;
	obj.setx(x);
	obj.getx();
	return 0;
}
