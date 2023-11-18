//Example 1
/*
#include<iostream>
using namespace std;
int main(){
	int x,y;
	cin>>x>>y;
	try{
		if(y!=0){
			cout<<"x / y = "<<x/y<<endl;
		}
		else{
			throw y; // throw; compiler terminates the program
		}
	}
	catch(int x){ // catch(diffTYPE than throw); compiler terminates the program
		cout<<"Exception is: y = "<<x<<endl;
	}
	cout<<"Program completed!";
	return 0;
}
*/

//Example 2
/*
#include<iostream>
using namespace std;
int main(){
	int arr[5];
	int n,i=0;
	cout<<"Enter number of elements to insert in array: ";
	cin>>n;
	try{
		if(n>5) throw(n);
		else{
			for(int i=0;i<n;i++){
				cin>>arr[i];
			}
		}
	}
	catch(int x){
	cout<<"Array size exceeded: "<<x<<" expected maximum 5"<<endl;	
	}
	/*
	while(i<n){
		try{
			if(i>4) {
				throw(arr[i-1]);
				}
			else{
				cin>>arr[i++];
			}
		}
	catch(int x){
		cout<<"Array size exceeded after element: "<<x<<endl;
		break;
		}
	}//
	return 0;
}
*/

// throw(); outside try block, in a function but function called in try block
/*
#include<iostream>
using namespace std;
void div(int a, int b){
	if(b==0) throw(b);
	else cout<<"Div a/b= "<<a/b;
}
int main(){
	int a,b;
	cin>>a>>b;
	try{
		div(a,b);
	}
	catch(int x){
		cout<<"Exception caught!";
	}
	return 0;
}
*/

// multiple catch();
/*
#include<iostream>
using namespace std;
void div(int a){
	if(a==0) throw a;
	if(a==1) throw 'a';
	if(a==-1) throw float(a);
	else cout<<"Div a/b= "<<a;
}
int main(){
	int a;
	cin>>a;
	try{
		div(a);
	}
	catch(int x){
		cout<<"integer exception caught!";
	}
	catch(char x){
		cout<<"Character exception caught!";
	}
	catch(float x){
		cout<<"Float exception caught!";
	}
	return 0;
}
*/

// 	Universal catch-> catch(...); : put after individual catch(typeN) as it can catch any type of argument
/*
#include<iostream>
using namespace std;
void div(int a){
	if(a==0) throw (a,'9',90); // for multiple args in throw() it throws last argument i.e. rightmost argument
	if(a==1) throw 'a';
	if(a==-1) throw float(a);
	else throw("str");
}
int main(){
	int a;
	cin>>a;
	try{
		div(a);
	}
	catch(int x){
		cout<<"integer exception caught!";
	}
	catch(char x){
		cout<<"Character exception caught!";
	}
	catch(float x){
		cout<<"Float exception caught!";
	}
	catch(...){ // Universal catch aka catch all
		cout<<"Universal catch caught an exception!";
	}
	return 0;
}*/

// throwing a class object

#include<iostream>
using namespace std;
class abc{
	int a;
	public:
		abc(int a){
			this->a=a;
			cout<<"\nConstructor!";
		}
		void display(){
			cout<<endl<<a;
		}
		~abc(){
			cout<<"\nDestructor!";
		}
};
int main(){
	int a;
	cin>>a;
	try{
		throw abc(a);
	}
	catch(abc q){
		cout<<"\nClass exception!";
		q.display();
	}
	return 0;
}

/*
//nested try-throw-catch & Rethrowing & throwing class exception
#include<iostream>
using namespace std;
class abc{
	int a;
	public:
		abc(int a){
			this->a=a;
			cout<<"Constructor!\n";
		}
		void display(){
			try{
			cout<<a<<endl;
			throw a;
			}
			catch(int){
				cout<<"inclass exception\n";
				throw;  //rethrowing
			}
		}
		~abc(){
			cout<<"Destructor!\n";
		}
};
int main(){
	int a;
	cin>>a;
	try{ // nested try throw catch
		try{
			abc A(a);
			A.display();
			throw a;
		}
			catch(int){
				cout<<"Nested exception\n";
				throw; // rethrowing
			}
	}
	catch(int){
		cout<<"Main exception\n";
	}
	return 0;
}*/
