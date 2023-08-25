#include<iostream>
using namespace std;
enum color{
	q,w,e,r,t,y
};
enum custom{
	a=7,b,c,d=78,f,g=8
};
int main(){
	color c1;
	c1=t;
	cout<<c1<<endl;
	custom cu1;
	cu1=c;
	cout<<cu1;
	return 0;
}

