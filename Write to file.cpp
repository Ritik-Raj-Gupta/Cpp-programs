// using constructor
/*
#include<iostream>
using namespace std;
#include<fstream>
int main(){
	ofstream of("write.txt");
	of<<"This_is_a_program_to_write_to_a_file!";
	of.close();
	cout<<"Write success!";
	return 0;
}
*/

// using f.open()
#include<iostream>
using namespace std;
#include<fstream>
int main(){
	ofstream of;
	of.open("write.txt");
	of<<"This_is_a_program_to_write_to_a_file!";
	of.close();
	cout<<"Write success!";
	return 0;
}

