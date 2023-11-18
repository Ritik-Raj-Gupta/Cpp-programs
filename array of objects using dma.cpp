#include<iostream>
using namespace std;
class stud{
	int rno;
	string name;
	string addr;
	public:
		void get(){
			cin>>rno;
			cin>>name;
			cin>>addr;
		}
		void show(){
			cout<<rno<<"\t"<<name<<"\t"<<addr<<endl;
		}
};
int main(){
	int n; cout<<"Enter number of students: ";
	cin>>n;
	stud* p=new stud[n]; stud* d=p; stud* e=p;
	if(p==NULL) {
	cout<<"Memory allocation failure!";
	exit(1);
	}
	for(int i=0;i<n;i++){
	p->get();
	p++;
	//(*p).get();
	//p[i].get();
	}
	for(int i=0;i<n;i++){
	d->show();
	//p[i].show();
	//(*d).show();
	d++;
	}	
	//delete []p;
	delete []e;
	return 0;
}
