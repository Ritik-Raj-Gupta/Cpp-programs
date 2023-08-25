#include<iostream>
using namespace std;
int main(){
	int x=10;
	const int* const ptr=&x;
	cout<<*ptr<<"\t\t";
	//ptr=ptr+1;
	//*ptr=*ptr+1;
	return 0;
}

