#include<iostream>
using namespace std;
struct student{
	int rn;
	char name[30];
}s1;
union employee{
	int eid;
	char ename[30];
}e1;
int main(){
	student s2,s[3];
	employee e2,e[3];
//-----------------STRUCTURE-----------------------------
	/*
	cout<<"Enter student details:\n"<<"Name: ";
	cin.getline(s1.name,30);
	cout<<"Roll number: ";
	cin>>s1.rn;
	cout<<endl;
	cout<<"Enter student 2 details:\n"<<"Name: ";
	cin.ignore(); // equivalent of fflush(stdin);
	cin.getline(s2.name,30);
	cout<<"Roll number: ";
	cin>>s2.rn;
	cout<<endl;
	cout<<"Student details: \n";
	cout<<s1.rn<<endl;
	cout<<s1.name<<endl;
	cout<<"Student 2 details: \n";
	cout<<s2.rn<<endl;
	cout<<s2.name<<endl;
	cout<<sizeof(s1)<<endl;
	*/
	/*
	int i;
	for(i=0;i<3;i++){
		cout<<"\nEnter student "<<i+1<<" details\nName: ";
		cin.getline(s[i].name,30);
		cout<<"Roll number: ";
		cin>>s[i].rn;
		cin.ignore();
	}
	for(i=0;i<3;i++){
		cout<<"\nStudent "<<i+1<<" detail: \n";
		cout<<"Roll no: "<<s[i].rn<<endl;
		cout<<"Name: "<<s[i].name<<endl;
	}
	*/
	
	
//---------------UNION-----------------------------------
	/*
	cout<<"\nEnter Employee details:\n"<<"Name: ";
	cin.getline(e1.ename,30);
	cout<<e1.ename<<endl;
	cout<<"\nEmployee id: ";
	cin>>e1.eid;
	cout<<e1.eid<<endl;
	fflush(stdin);
	cout<<"\nEnter Employee 2 details:\n"<<"Name: ";
	cin.getline(e2.ename,30);
	cout<<e2.ename<<endl;
	cout<<"\nEmployee id: ";
	cin>>e2.eid;
	cout<<e2.eid<<endl;
	*/
	/*
	int i;
	for(i=0;i<3;i++){
		cout<<"\nEnter employee "<<i+1<<" details\nEmployee id: ";
		cin>>e[i].eid;
		cin.ignore();
		cout<<"Employee id is: "<<e[i].eid<<endl;
		cout<<"Enter name of employee "<<i+1<<" : ";
		cin.getline(e[i].ename,30);
		cout<<"Employee name is: "<<e[i].ename<<endl;
	}*/
	cout<<sizeof(s1);// bit padding increases size of name[30] to 32 to match multiple of int type size 
	return 0;
}
