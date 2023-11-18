#include<iostream>
#include<fstream>
using namespace std;
int main(){
	fstream f1;
	fstream f2;
	char c1,c2;
	char fname1[40], fname2[40];
	cout<<"Enter filename 1: ";
	cin.getline(fname1,40);
	cout<<"Enter filename 2: ";
	cin.getline(fname2,40);
	f1.open(fname1,ios::in);
	f2.open(fname2,ios::in);
	if(!f1 || !f2){
		cout<<"Files doesn't exist!";
	}
	else{
		c1=f1.get(); c2=f2.get();
		while((c1!=EOF) && (c2!=EOF) && (c1==c2)){
			c1=f1.get(); c2=f2.get();
		}
		if(c1==c2){
			cout<<"Files are identical!";
		}
		else{
			cout<<"Files are different!";
		}
	}
	f1.close(); f2.close();
	return 0;
}
 
