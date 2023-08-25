// FUNCTION OVERLOADING
//						Function with same name but different type, number or order of parameters
#include<iostream>
using namespace std;
void sum(int a,int b){
	cout<<"Sum of integers is: "<<a+b<<endl;
}
void sum(double a, double b){
	cout<<"Sum of double is: "<<a+b<<endl;
}
void sum(char a, char b){
	cout<<"Sum of char is: "<<a+b<<endl;
}
int main(){
	sum(4,5);
	sum(4.5,5.5);
	sum('a','b');
	return 0;
}
