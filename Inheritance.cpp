
// Single level inheritance

// public inheritance
/*
#include<iostream>
#include<string>
using namespace std;
class student{
	private:
		int rno;
	protected:
		string section;
	public:
		void get_rno(){
			cin>>rno;
		}
		void get_sec(){
			cin.ignore();
			cin>>section;
		}
		void show(){
			cout<<rno<<'\t'<<section;
		}
};
class result: public student{
	private:
		int marks;
	public:
		void get_data(){
			get_rno();
			get_sec();
			cin>>marks;
		}
};
int main(){
	result res;
	res.get_rno();  // possible as public inheritance
	res.get_data();
	res.show();
	//cin>>res.section; // error as section is protected
	return 0;
}
*/

// protected inheritance
/*
#include<iostream>
#include<string>
using namespace std;
class student{
	private:
		int rno;
	protected:
		string section;
	public:
		void get_rno(){
			cin>>rno;
		}
		void get_sec(){
			cin.ignore();
			cin>>section;
		}
		void show(){
			cout<<rno<<'\t'<<section;
		}
};
class result: protected student{
	private:
		int marks;
	public:
		void get_data(){
			get_rno();
			get_sec();
			cin>>marks;
		}
};
int main(){
	result res;
	//res.get_rno();  // not possible as protected inheritance
	res.get_data();
	//res.show(); // not possible as protected inheritance
	//cin>>res.section; // error as section is protected
	return 0;
}*/

#include<iostream>
#include<string>
using namespace std;
class student{
	private:
		int rno;
	protected:
		string section;
	public:
		void get_rno(){
			cin>>rno;
		}
		void get_sec(){
			cin.ignore();
			cin>>section;
		}
		void show(){
			cout<<rno<<'\t'<<section;
		}
};
class result: private student{
	private:
		int marks;
	public:
		void get_data(){
			get_rno();
			get_sec();
			cin>>marks;
		}
};
int main(){
	result res;
	//res.get_rno();  // not possible as private inheritance
	res.get_data();
	//res.show(); // not possible as private inheritance
	//cin>>res.section; // error as section is protected
	return 0;
}

