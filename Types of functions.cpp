// for default arguments function defition must be done before calling
#include<iostream>
using namespace std;
void fun1(int,int,int,int);
void fun1(int x, int y, int z=0,int a=0){
	cout<<"\nSum is: "<<x+y+z+a;
}
int main()
{
	fun1(5,10);
	fun1(5,10,15);
	fun1(5,10,15,20);
	return 0;
}
