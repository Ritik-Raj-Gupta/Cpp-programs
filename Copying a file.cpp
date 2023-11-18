#include<iostream>
#include<fstream>
using namespace std;
int main(){
	fstream f1;
	fstream f2;
	char c1;
	f1.open("Tect1.txt",ios::in);
	f2.open("Tect1_copy.txt",ios::out);
	c1=f1.get();
	while(c1!=EOF){
		f2.put(c1);
		c1=f1.get();
	}
	cout<<"File copied!";
	f1.close(); f2.close();
	return 0;
}
 
