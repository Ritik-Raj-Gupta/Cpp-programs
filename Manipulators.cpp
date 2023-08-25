#include<iostream>
using namespace std;
#include<iomanip>
int main(){
	int a=193;float b=19.3553; double c=174.3535;
	cout<<a<<endl;
	cout<<setbase(10)<<a<<'\t'<<dec<<a<<endl;
	cout<<setbase(16)<<a<<'\t'<<hex<<a<<endl;
	cout<<setbase(8)<<a<<'\t'<<oct<<a<<endl;
	cout<<setprecision(2)<<b<<endl;
	cout<<fixed<<setprecision(4)<<c<<endl;
	cout<<setw(10)<<a<<endl;
	cout<<setfill('x')<<setw(10)<<a<<endl;
	cout<<ends;
	ws(cin);
	cin>>ws;
	//cout<<setfill('\n')<<setw(20)<<a<<endl;
	return 0;
}

