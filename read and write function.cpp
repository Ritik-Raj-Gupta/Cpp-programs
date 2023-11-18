// f.read((char *) &var,size) -> address of variable to store data after reading -> size is no. of bytes to read
// f.write((char *) &var, size) -> address of variable from where we have to take data to store in file -> size is no. of bytes to write

#include<iostream>
#include<fstream>
using namespace std;
/*int main(){
	float height[4]={17.5,15.0,3.8,5.0};
	ofstream outfile; ifstream infile;
	/*outfile.open("rnwfuncs.txt");
	outfile.write(( char *)height,sizeof(height));
	outfile.close();
	float p[4];
	ifstream infile;
	infile.open("rnwfuncs.txt");
	infile.read((char*) p,16);
	cout<<p[0]<<endl<<p[1];
	outfile.close(); infile.close();*/
	/*
	string s="hello all";
	outfile.open("rnwfuncs str.txt");
	outfile.write(( char *)&s,sizeof(s));
	outfile.close();
	string s1;
	infile.open("rnwfuncs str.txt");
	infile.read((char*)&s1,16);
	cout<<endl<<s1;
	return 0;
}*/
class student
{
	char name[50];
	int rollno;
	float marks;
	public:
		void getinfo()
		{
			cout<<"Enter name=";
			gets(name);
			cout<<"Enter Roll no=";
			cin>>rollno;
			cout<<"Enter Marks=";
			cin.ignore();
			cin>>marks;
		}
		void putinfo()
		{
			cout<<"Name="<<name<<endl;
			cout<<"Rollno="<<rollno<<endl;
			cout<<"Marks="<<marks<<endl;
		}
};
int main()
{
	student s1,s2;
	s1.getinfo();
	fstream fobj;
	fobj.open("nn.txt",ios::out|ios::binary);
	fobj.write((char*)&s1,sizeof(s1));
	fobj.close();
	fobj.open("nn.txt",ios::in|ios::binary);
	fobj.read((char*)&s2,sizeof(s2));
	s2.putinfo();
	fobj.close();
	return 0;
}
