// file.put(ch) -> writes a character ch in file
// file.get(ch) -> reads a character from file and puts it in ch
#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{
char s[40];
cout<<"Enter input=";
gets(s);
int length=strlen(s);
fstream obj;
obj.open("new.txt",ios::out);
for(int i=0;i<length;i++)
obj.put(s[i]);
obj.seekp(0);
obj.close();
//Again open
obj.open("new.txt",ios::in);
char ch;
while(obj)
{
obj.get(ch);
cout<<ch;
}
obj.close();
return 0;
}
