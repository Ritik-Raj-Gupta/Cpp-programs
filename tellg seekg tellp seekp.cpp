// tellg() -> tells position of input/get pointer # when file is in read mode
// seekg() -> move get pointer by a specified number of positions SYNTAX seekg(offset, refposition)  {{ refpositon -> ios::beg, ios::end, ios::cur }} 
			// << -ve offset means from right to left move >>
// tellp() -> tells position of out/output pointer # when file is in write mode
// seekp() -> move out pointer by a specified number of positions ->SYNTAX seekp(offset, ref position) {{ refpositon -> ios::beg, ios::end, ios::cur }} 
			// << -ve offset means from right to left move >>

#include <fstream>
#include <iostream>
using namespace std;

int main()
{ 
int pos;
ofstream fout;
fout.open("abc.txt");
pos=fout.tellp(); // initially 0
cout<<"Initial tellp: "<<pos<<endl<<endl;
fout<<"Hello this is your captain! If you see to your right there is a volcano.";
pos=fout.tellp(); // written 72 characters so output pointer goes to 72 
cout<<"After write tellp: "<<pos<<endl<<endl;
fout.seekp(15);
pos=fout.tellp();
cout<<"After seekp(15): "<<pos<<endl<<endl; // seekp(15) put pointer moved 15 positions from 0 <default ref position is from beginning> 
fout.seekp(15,ios::end);
pos=fout.tellp();
cout<<"After seekp(15, ios::end): "<<pos<<endl<<endl; // 15 positions from end
fout.seekp(15,ios::beg);
pos=fout.tellp();
cout<<"After seekp(15, ios::beg): "<<pos<<endl<<endl; // 15 positions from beginning
fout.seekp(15,ios::cur);
pos=fout.tellp();
cout<<"After seekp(15, ios::cur): "<<pos<<endl<<endl; // 15 positions from current position
fout.close();
ifstream fin;
char ch;
fin.open("abc.txt");
pos=fin.tellg(); // initially 0
cout<<endl<<"Initial tellg: "<<pos<<endl<<endl;
fin>>ch; // read 1 character so get pointer goes to 1 from 0
pos=fin.tellg();
cout<<"After read tellg: "<<pos<<endl<<endl;
fin.seekg(20);
pos=fin.tellg();
cout<<"After seekg(20): "<<pos<<endl<<endl; // get pointer moved 20 positions from 0 <default ref position is from beginning> 
fin.seekg(20,ios::end);
pos=fin.tellg();
cout<<"After seekg(20,ios::end): "<<pos<<endl<<endl; // 20 positions from end
fin.seekg(20,ios::beg);
pos=fin.tellg();
cout<<"After seekg(20,ios::beg): "<<pos<<endl<<endl; // 20 positions from beginning
fin.seekg(20,ios::cur);
pos=fin.tellg();
cout<<"After seekg(20,ios::cur): "<<pos<<endl<<endl; // 20 positions from current position
return 0;
}
 
