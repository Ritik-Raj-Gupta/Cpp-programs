// Inline functions ----------------------------------
/*
#include<iostream>
using namespace std;
inline double div(double a, double b){
	return a/b;
}
int main(){
	double a=12.4;
	double b=4.0;
	cout<<div(a,b)<<endl;
	return 0;
}
*/

//--------------------------------------------------

/*
#include<iostream>
using namespace std;
class Student{
	int rno;
	char name[30];
	public:
		void getdata(){
			cout<<"Enter rno and name: ";
			cin>>rno;
			cin.ignore();
			cin.getline(name,30);
		}
		inline void putdata();
}s;
inline void Student::putdata(){
	cout<<rno<<endl;
	cout<<name;
}
int main(){
	s.getdata();
	s.putdata();
	return 0;
}
*/

// Static data members---------------------------------------
/*
#include<iostream>
using namespace std;
class Student{
	static int count;
	int rno;
	string name;
	public:
		void getdata(){
			cout<<"Enter rno and name: ";
			cin>>rno;
			cin>>name;
			count++;
		}
		void putcount(){
			cout<<count;
		}
}s1,s2;
int Student::count;
int main(){
	s1.getdata();
	s2.getdata();
	s1.putcount();
	cout<<endl;
	s2.putcount();
	return 0;
}
*/

// Static member functions----------------------------------------
							// Work on only static data members
#include<iostream>
using namespace std;
class Student{
	static int count;
	int rno;
	char name[30];
	public:
		void getdata(){
			cout<<"Enter rno and name: ";
			cin>>rno;
			cin.ignore();
			cin.getline(name,30);
			count++;
		}
		static void showcount(){
			cout<<count;
		}
}s1,s2;
int Student::count;
int main(){
	s1.getdata();
	s2.getdata();
	Student::showcount(); //s1.showcount() give same output
	cout<<endl;
	Student::showcount(); // s2.showcount() give same output
	return 0;
}
