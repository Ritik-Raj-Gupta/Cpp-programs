/* String functions:
					insert()-> syntax: str1.insert(indexstr1,str2,indexstr2,numofcharsofstr2) <if indexstr2 and numofcharsofstr2 are not passed complete string is taken>
					erase() -> syntax: str1.erase(indexstr1,numofchars)
					replace() -> syntax: str1.replace(indexstr1,numofchars,str2)
					append() -> syntax: str1.append(str2,indexstr2,numofchars)
					size() -> returns number of charcters in string
					length() -> returns numer of characters in string
					max_size() -> returns maximum size a string object can take in system
					empty() -> checks whether string is empty or not <returns 1 for empty and 0 for non-empty>
					compare() -> compares 2 strings - syntax: str1.compare(indexstr1,numofcharsofstr1,str2,indexstr2,numofcharsofstr2) 
									<if only str1.compare(str2) is there it will compare whole str1 with str2>
					swap() -> syntax: str1.swap(str2)
					at() -> syntax: str1.at(index) - returns character at specified index
					substr() -> syntax: str2=str1.substr(index, numofchars) - returns a substring of str1
					find() -> syntax: str1.find(str2) - returns index of  first char of str2
					rfind() -> syntax: sr1.rfind(str2) - returns index of first char of str2 from right side
					find_first_of() -> syntax: str1.find_first_of(str2) - returns index of first occurrence of str2
					find_last_of() -> syntax: str1.find_last_of(str2) - returns index of last occurrence of str2
					getline() -> syntax: getline(cin,str1) - takes input through input stream and stores it in str1
*/

#include<iostream>
#include<string>
using namespace std;
int main(){
	string s1="Minecraft";
	string s3=s1;
	string s2="Fortnite";
	cout<<"s1 is: "<<s1<<"\ns2 is: "<<s2<<endl;
	s1.insert(2,s2);
	cout<<"After insert(whole string) s1 is: "<<s1<<endl;s1=s3;
	s1.insert(2,s2,0,2);
	cout<<"After insert(with all parameters) s1 is: "<<s1<<endl;s1=s3;
	s1.erase(2,8);
	cout<<"After erase s1 is: "<<s1<<endl;s1=s3;
	s1.replace(2,3,s2);
	cout<<"After replace s1 is: "<<s1<<endl;s1=s3;
	s1.append(s2,0,8);
	cout<<"After append s1 is: "<<s1<<endl;s1=s3;
	cout<<"size: "<<s2.size()<<endl;
	cout<<"length: "<<s2.length()<<endl;
	cout<<"max size: "<<s1.max_size()<<endl;
	cout<<"Empty or not: "<<s1.empty()<<endl;
	cout<<"Comparing strings s1 with s2: "<<s1.compare(s2)<<endl;
	s1.swap(s2);
	cout<<"After swap s1 with s2, s1 is: "<<s1<<endl;
	cout<<"Character at index 3 using .at(): "<<s1.at(3)<<endl;
	s3=s1.substr(0,5);
	cout<<"substring of "<<s1<<" is: "<<s3<<endl;
	s3=s2.substr(0,5);
	cout<<"substring of "<<s2<<" is: "<<s3<<endl;
	cout<<"find(i) in str1: "<<s1.find('i')<<endl;
	cout<<"find(i) in str2: "<<s2.find('i')<<endl;
	cout<<"rfind(e) in str1: "<<s1.rfind('e')<<endl;
	cout<<"rfind(e) in str2: "<<s2.rfind('e')<<endl;
	cout<<"find_first_of(i) in str1: "<<s1.find_first_of('i')<<endl;
	cout<<"find_first_of(i) in str2: "<<s2.find_first_of('i')<<endl;
	cout<<"find_last_of(e) in str1: "<<s1.find_last_of('e')<<endl;
	cout<<"find_last_of(e) in str2: "<<s2.find_last_of('e')<<endl;
	cout<<"Getting input in s3 using getline(): ";
	getline(cin,s3);
	cout<<"s3 is: "<<s3;
	return 0;
}
