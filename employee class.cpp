#include<iostream>
#include<vector>
using namespace std;
class employee{
	private:
		string name;
		int eid;
		float sal;
		int phone;
	public:
		void getdata(){
			int a,d;string b; float c;
			cout<<"Enter employee id, name, sal, phone: ";
			cin>>a>>b>>c>>d;
			eid=a;name=b;sal=c;phone=d;
		}
		void putdata(){
			cout<<"Details of employee are: "<<eid<<" "<<name<<" "<<sal<<" "<<phone;
		}
}a;
int main(){
	vector<employee> e;
	int i,n;
	cout<<"Enter number of employees: ";
	cin>>n;
	for(i=0;i<n;i++){
		a.getdata();
		e.push_back(a);
	}
	for(i=0;i<n;i++){
		e.at(i).putdata();
	}
}
