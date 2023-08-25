#include<iostream>
using namespace std;
int main(){
	int arr[5]={1,2,3,4,5};
	int* ptr;
	ptr=arr;
	cout<<*ptr<<endl;
	ptr++;
	cout<<*ptr<<endl;
	ptr--;
	cout<<*ptr<<endl;
	ptr+=3;
	cout<<*ptr<<endl;
	ptr-=2;
	cout<<*ptr<<endl;
	int *ptr2=arr;
	cout<<*ptr+*ptr2<<endl;
	cout<<ptr-ptr2<<endl;
	ptr=&arr[3];
	cout<<ptr<<'\t'<<*ptr<<endl;
	return 0;
}
