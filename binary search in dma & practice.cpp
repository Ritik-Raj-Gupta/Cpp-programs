#include<iostream>
using namespace std;

class abc{
	int* arr;
	double* arr2;
	double* arr3;
	int size;
	public:
		abc(int n){
			size=n;
			arr=new int[n];
			for(int i=0;i<n;i++){
				cin>>arr[i];
			}
			arr2=new double[n];
			for(int i=0;i<n;i++){
				cin>>arr2[i];
			}
			arr3=new double[n];
		}
		void su(){
			int s=0;
			for(int i=0;i<size;i++){
				s+=arr[i];
			}
			cout<<"Sum of integer array elements: "<<s<<endl;
			double sd=0;
			for(int i=0;i<size;i++){
				sd+=arr2[i];
			}
			cout<<"Sum of double array elements: "<<sd<<endl;
			sd=0;
			for(int i=0;i<size;i++){
				sd+=arr[i]+arr2[i];
			}
			cout<<"Sum of resultant array elements: "<<sd<<endl;

		}
		void display(){
			cout<<"Integer array elements: ";
			for(int i=0;i<size;i++){
				cout<<arr[i]<<" ";
			}cout<<endl;
			cout<<"Double array elements: ";
			for(int i=0;i<size;i++){
				cout<<arr2[i]<<" ";
			}cout<<endl;
			cout<<"Resultant array elements: ";
			for(int i=0;i<size;i++){
				arr3[i]=arr[i]+arr2[i];
				cout<<arr3[i]<<" ";
			}cout<<endl;
			su();
		}
		/*
		int bSearch(int ele){
			int first=0; int last=size-1; int middle; 
			while(first<last || first==last){
				middle=(first+last)/2;
				if(arr[middle]==ele){
					return middle+1;
				}
				else if(arr[middle]>ele){
					last=middle-1;
				}
				else{
					first=middle+1;
				}
			}
			return -1;
		}*/
		~abc(){
			delete []arr;
			delete []arr2;
			delete []arr3;
			cout<<"Memory freed!";
		}
};

int main(){
	int n,ele;
	cin>>n;
	abc a(n);
	a.display();
	/*cout<<"Enter element to search: ";
	cin>>ele;
	int f=a.bSearch(ele);
	if(f==-1){
		cout<<"Element not found!\n";
	}
	else{
		cout<<"Element found at position "<<f<<endl;
	}*/
	return 0;
}
