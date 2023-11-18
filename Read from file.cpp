// using constructor
/*
#include<iostream>
#include<string>
using namespace std;
#include<fstream>
int main(){
	string data;
	ifstream rf("write.txt");
	rf>>data;
	cout<<"Read successful!\n";
	rf.close();
	cout<<"Content: "<<data;
	return 0;
}
*/

// using f.open()
#include<iostream>
#include<string>
using namespace std;
#include<fstream>
int main(){
	string data;
	ifstream rf;
	rf.open("write.txt");
	rf>>data;
	cout<<"Read successful!\n";
	rf.close();
	cout<<"Content: "<<data;
	return 0;
}

