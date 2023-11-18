// problem when base class pointer points to dynamically allocated child class obj -> fixed using "virtaul" in base class destructor
#include<iostream>
using namespace std;
class stud{
	public:
		stud(){
			cout<<"Base class constructor!";
		}
		virtual ~stud(){	// without "virtual" derived class destructor is not called
			cout<<"\nBase class destructor!";
		}
};
class sub: public stud{
		public:
		sub(){
			cout<<"\nDerived class constructor!";
		}
		~sub(){
			cout<<"\nDerived class destructor!";
		}
};
int main(){
	stud* obj=new sub;
	delete obj;
	return 0;
}

