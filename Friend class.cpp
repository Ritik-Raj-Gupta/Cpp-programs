// for friend class and friend function we have to pass the class object of class in which the friend is declared
// friend func1(ABC &obj){}, is must
#include<iostream>
using namespace std;
class ABC;
class XYZ{
	int data_XYZ;
	public:
		void set(int value)
		{
			data_XYZ=value;
		}
	friend class ABC;

};
class ABC{
	int data_ABC;
	public:
		void setvalue(XYZ obj1){ // passing object of class XYZ
			data_ABC=obj1.data_XYZ;
			cout<<"Value is: "<<data_ABC;
		}
};
int main(){
	XYZ X;
	ABC A;
	int o;
	cout<<"Enter value of object: ";
	cin>>o;
	X.set(o);
	A.setvalue(X);
	return 0;
}
