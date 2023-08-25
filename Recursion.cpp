// RECURSION
//			Function calling itself i.e. function calling in function definition
#include<iostream>
using namespace std;
int f;
int fbs(int n){
	if(n<=1){
		return 1;
	}
	else{
		f=fbs(n-1)*n;
		return f;
	}
}
int main(){
	int fac,n;
	cin>>n;
	fac=fbs(n);
	cout<<"Factorial of number is: "<<fac;
	return 0;
}
