#include<iostream>
#include<vector>
using namespace std;
class student{
	int rno;
	//string name;
	char name[50];
	float marks;
	public:
		/*student(int q,string w,float e){
			name=w;
			rno=q;
			marks=e;
		}*/
		void getdata(){
			int x;
			// string y; 
			float z;
			cout<<"Enter roll no: ";
			cin>>x;
			cin.ignore();
			cout<<"Enter name: ";
			//cin>>x>>y>>z;
			cin.getline(name,50); // y must be char for this // space " " is not the delimiter in this
			cout<<"Enter marks: ";
			cin>>z;
			cin.ignore(); // fflush(stdin);
			rno=x;
			marks=z;
		}
		void putdata(){
			cout<<"Roll no is: "<<rno<<endl;
			cout<<"Name is: "<<name<<endl;
			cout<<"Marks: "<<marks<<endl;
			cout<<endl;
		}
};
int main(){
	//student s1,s2,s3
	student s[20];
	// student s2(2,"Ritik",92.3);
	/*s1.getdata();
	//s2.putdata();
	s2.getdata();
	s3.getdata();
	cout<<endl;
	s1.putdata();
	s2.putdata();
	s3.putdata();*/
	int i,n;
	cout<<"Enter number of students: ";
	cin>>n;
	for(i=0;i<n;i++){
		s[i].getdata();
	}
	cout<<endl;
	for(i=0;i<n;i++){
		cout<<"Details of student "<<i+1<<endl;
		s[i].putdata();
	}
}
