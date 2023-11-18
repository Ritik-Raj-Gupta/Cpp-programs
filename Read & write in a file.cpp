// using constructor
/*
#include<iostream>
using namespace std;
#include<fstream>
int main(){
	ofstream of("write2.txt");
	of<<"This_is_a_program_to_read_and_write_to_a_file!";
	cout<<"Write success!\n";
	of.close();
	string data;
	ifstream rf("write2.txt");
	rf>>data;
	rf.close();
	cout<<"Read success!\nContents: "<<data;
	return 0;
}
*/

// using f.open()
// open(path,mode)-> file modes ->
								 // ios::app(append), binary(use file in binary format) , in(read only) , 
								 // nocreate( dont create new file if file does not exist)
								 // , noreplace(dont replace file if already exists) , out(write only) , trunc(delete all contents)
// while(f)-> until eof is encountered loop will run
// if(f.eof()!=0)-> until eof is encounterd -> f.eof() returns non-zero if eof not reached and 0 for eof reached
#include<iostream>
using namespace std;
#include<fstream>
int main(){
	ofstream of;
	of.open("write2.txt");
	of<<"This_is_a_program_to_read_and_write_to_a_file!";
	cout<<"Write success!\n";
	of.close();
	string data;
	ifstream rf;
	rf.open("write2.txt");
	rf>>data;
	rf.close();
	cout<<"Read success!\nContents: "<<data;
	return 0;
}
