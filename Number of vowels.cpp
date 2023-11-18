#include<fstream>
#include<iostream>
using namespace std;
int main(){
	fstream f1;
	f1.open("Tect1.txt",ios::in);
	int v=0;
	char ch;
	ch=f1.get();
	while(ch!=EOF){
		if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
			v+=1;
		}
		ch=f1.get();
	}
	cout<<"Number of vowels in file: "<<v<<endl;
	return 0;
}
