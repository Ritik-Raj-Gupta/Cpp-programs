#include<iostream>
using namespace std;
class stud{
	int rno;
	char* name;
	char* addr;
	public:
		stud(){
			name=new char[20];
			addr=new char[25];
			cout<<"Enter roll no. , name , address: ";
			cin>>rno>>name>>addr;
		}
		void show(){
			cout<<rno<<"\t"<<name<<"\t"<<addr<<endl;
		}
		~stud(){
			delete name;
			delete addr;
		}
};
int main(){
	int n; cout<<"Enter number of students: ";
	cin>>n;
	stud* p=new stud[n]; stud* d=p;
	if(p==NULL) {
	cout<<"Memory allocation failure!";
	exit(1);
	}
	for(int i=0;i<n;i++){
	p->show();
	p++;
	}	
	delete []d;
	return 0;
}

