// using constructor
/*
#include<iostream>
using namespace std;
#include<fstream>
int main(){
	string name,location;
	cout<<"Enter name and location to write to file: ";
	cin>>name>>location;
	ofstream of("RnWpractice.txt");
	of<<name<<endl<<location<<endl;
	cout<<"Write success!\n";
	of.close();
	string data,data2;
	ifstream rf("RnWpractice.txt");
	rf>>data>>data2;
	rf.close();
	cout<<"Read success!\nContents: \nName:"<<data<<"\nLocation: "<<data2;
	return 0;
}
*/

// using f.open()
#include<iostream>
using namespace std;
#include<fstream>
int main(){
	string name,location;
	cout<<"Enter name and location to write to file: ";
	cin>>name>>location;
	ofstream of;
	of.open("RnWpractice.txt");
	of<<name<<endl<<location<<endl;
	cout<<"Write success!\n";
	of.close();
	string data,data2;
	ifstream rf;
	rf.open("RnWpractice.txt");
	rf>>data>>data2;
	rf.close();
	cout<<"Read success!\nContents: \nName:"<<data<<"\nLocation: "<<data2;
	return 0;
}
