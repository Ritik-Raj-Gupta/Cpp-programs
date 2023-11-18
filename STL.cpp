//vectorname.insert(iterator / begin+n,element);
//vname.erase(startposasiterator, last+1positionasiterator);
//vname.clear();
#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> a(10);
	//vector<int> a;
	cout<<"initial size: "<<a.size()<<endl;
	for(int i=0; i<10; i++){
		a[i]=i;
	}
	cout<<"init v size: "<<a.size()<<endl;
	/*for(int i=0;i<10;i++){
		a.at(i)=i;
	}*/
	for(int i=10;i<20;i++){
		a.push_back(i);
	}
	cout<<"updated size: "<<a.size()<<endl;
	a.pop_back();
	a.pop_back();
	cout<<"updated after pop size: "<<a.size()<<endl;
	vector<int>::iterator i=a.begin();
	/*for(int &i : a){
		cout<<i<<endl;
	}*/
	while(i!=a.end()){
		cout<<*i<<endl;
		i++;
	}
	/*for(int i=0;i<a.size();i++){
		cout<<a.at(i)<<endl;
	}*/
	cout<<"insert\n";
	a.insert(a.begin()+18,100);
	for(int i=0;i<a.size();i++){
		cout<<a.at(i)<<endl;
	}
	a.erase(a.begin()+2,a.begin()+6);
	cout<<"delete / erase \n";
	for(int i=0;i<a.size();i++){
		cout<<a.at(i)<<endl;
	}
	cout<<"clear\n ";
	a.clear();
	for(int i=0;i<a.size();i++){
		cout<<a.at(i)<<endl;
	}
	return 0;
}
