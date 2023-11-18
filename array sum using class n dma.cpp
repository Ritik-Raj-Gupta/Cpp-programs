/*
#include<iostream>
using namespace std;

class abc{
	int* arr;
	int size;
	public:
		abc(int n){
			size=n;
			arr=new int[n];
			for(int i=0;i<n;i++){
				cin>>arr[i];
			}
		}
		void su(){
			int s=0;
			for(int i=0;i<size;i++){
				s+=arr[i];
			}
			cout<<"Sum of array elements: "<<s<<endl;
		}
		void display(){
			cout<<"Array elements: ";
			for(int i=0;i<size;i++){
				cout<<arr[i]<<" ";
			}cout<<endl;
			su();
		}
		~abc(){
			delete []arr;
			cout<<"Memory freed!";
		}
};

int main(){
	int n;
	cin>>n;
	abc a(n);
	a.display();
	return 0;
}
*/

//--------------------------------------------------------------------------

/*
#include<iostream>
using namespace std;

class abc{
	int* arr;
	int size;
	public:
		abc(int n);
		void display();
		void su();
		~abc();
};
abc::abc(int n){
			size=n;
			arr=new int[n];
			for(int i=0;i<n;i++){
				cin>>arr[i];
			}
		}
void abc::display(){
			cout<<"Array elements: ";
			for(int i=0;i<size;i++){
				cout<<arr[i]<<" ";
			}cout<<endl;
			su();
		}
void abc::su(){
			int s=0;
			for(int i=0;i<size;i++){
				s+=arr[i];
			}
			cout<<"Sum of array elements: "<<s<<endl;
		}
abc::~abc(){
			delete []arr;
			cout<<"Memory freed!";
}
int main(){
	int n;
	cin>>n;
	abc a(n);
	a.display();
	return 0;
}
*/

//--------------------------------------------------------------------------------

// Sum of array elements after deleting an element

#include<iostream>
using namespace std;
class abc{
	int* arr;
	int size;
	public:
		abc(int n);
		void display();
		void su();
		void del(int x);
		void delele(int x);
		~abc();
};
abc::abc(int n){
			size=n;
			arr=new int[n];
			for(int i=0;i<n;i++){
				cin>>arr[i];
			}
		}
void abc::display(){
			cout<<"Array elements: ";
			for(int i=0;i<size;i++){
				cout<<arr[i]<<" ";
			}cout<<endl;
			su();
		}
void abc::su(){
			int s=0;
			for(int i=0;i<size;i++){
				s+=arr[i];
			}
			cout<<"Sum of array elements: "<<s<<endl;
		}
void abc::del(int x){
	for(int i=x-1;i<size;i++){
		arr[i]=arr[i+1];
	}
	size--;
}
void abc::delele(int x){
	int i=0;
	while(arr[i]!=x && i<size){
		i++;
	}
	for(int j=i;j<size;j++){
		arr[j]=arr[j+1];
	}
	size--;
}
abc::~abc(){
			delete []arr;
			cout<<"Memory freed!";
}
int main(){
	int n,de;
	cin>>n;
	abc a(n);
	a.display();
	//cout<<"Enter position to delete element: ";
	cout<<"Enter element to delete: ";
	cin>>de;
	//a.del(de);
	a.delele(de);
	a.display();
	return 0;
}
