#include<iostream>
using namespace std;

void fac(int* n){
	int* f=new int;
	*f=1;
	for(int i=*n;i>0;i--){
		*f=*f*i;
	}
	cout<<"Factorial is: "<<*f<<endl;
}

/*int fac(int* n){
	if(*n==1){
		return 1;
	}
	else{
		int* f=new int;
		*f=(*n)-1;
		return *n*fac(f);
	}
}*/

int main(){
	/*int size,sum;
	int* a=new int;
	int* b=new int;
	int* arr;
	cout<<"Enter a & b ";
	cin>>*a>>*b;
	cout<<"Enter size of array: ";
	cin>>size;
	arr=new int[size];
	cout<<"Enter elements of array!\n";
	for(int i=0;i<size;i++){
		cin>>arr[i];
		//cin>>*(arr+i);
	}
	for(int i=0;i<size;i++){
		sum+=arr[i];
	}
	cout<<"Sum of a & b: "<<*a+*b<<endl;
	cout<<" - of a & b: "<<*a-*b<<endl;
	cout<<" * of a & b: "<<*a*(*b)<<endl;
	cout<<" / of a & b: "<<*a/(*b)<<endl;
	cout<<"Sum of array elements: "<<sum<<endl;
	delete a;
	delete b;
	delete []arr;*/
	int* n=new int;
	cout<<"Enter number to find factorial: ";
	cin>>*n;
	fac(n);
	delete n;
	return 0;
}

