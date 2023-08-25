#include<iostream>
using namespace std;
class CLASS{
	int x;
	int y;
	public:
		void getdata(){
			cout<<"Enter value of x: ";cin>>x;
			cout<<"Enter value of y: ";cin>>y;
		}
		int showdata(){
			cout<<"Value of x is: "<<x<<'\n'<<"Value of y is: "<<y<<"\nSum is: ";
			return x+y;
		}
};
int main(){
	CLASS c;
	CLASS* ptr;
	ptr=&c;
	(*ptr).getdata();
	cout<<(*ptr).showdata()<<endl;
	ptr->getdata();
	cout<<ptr->showdata();
	return 0;
}
