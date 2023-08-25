#include<iostream>
using namespace std;
void sum(int,int); // call by value
void fun2(int*,int*); // call by address/pointer
void fun3(int &,int &); // call by reference variable
int main(){
	int a,b;
	cin>>a>>b;
	cout<<a<<" "<<b<<endl;
	sum(a,b);
	cout<<a<<" "<<b<<endl;
	fun2(&a,&b);
	cout<<a<<" "<<b<<endl;
	fun3(a,b);
	cout<<a<<" "<<b<<endl;
}
void sum(int x, int y){
	cout<<x+y<<endl;
}
void sum(int* x, int* y){
	int z;
	z=*x;
	*x=*y;
	*y=z;
}
void sum(int &x, int &y){
	int z;
	z=x;
	x=y;
	y=z;
}
