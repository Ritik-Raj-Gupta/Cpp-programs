#include<iostream>
using namespace std;
class employee{
	public:
		int id;
		string name;
		string dept;
		int phone;
		
}e[20];
int main(){
	int i=0,n;
	cout<<"Enter number of employees: ";
	cin>>n;
	for(i=0;i<n;i++){
		cout<<"\nEnter details of employee "<<i+1<<endl;
		cin>>e[i].id;
		cin>>e[i].name;
		cin>>e[i].dept;
		cin>>e[i].phone;
	}
	cout<<"\nEmployee details are: "<<endl;
	for(i=0;i<n;i++){
		cout<<"Employee "<<i+1<<": "<<endl;
		cout<<e[i].id<<endl;
		cout<<e[i].name<<endl;
		cout<<e[i].dept<<endl;
		cout<<e[i].phone<<endl;
	}
}
