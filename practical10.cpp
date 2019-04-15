#include <iostream>
#include <fstream>
using namespace std;
int main()
{
ifstream a;
ofstream b;
a.open("main.cpp");
b.open("copied.txt");
char ch;
while (!a.eof())
{
ch=a.get();
b.put(ch);
a.close();
b.close();
}
cout<<"file is copied...";

fstream file;
char text[100];
file.open("copied.txt",ios::out|ios::in);
cout<<"write text to be a written on file"<<endl;
cin.getline(text,sizeof(text));
file<<text<<endl;
cout<<"+++++++++++REading from file+++++++++\n";
file>>text;
cout<<text<<endl;

return 0;
}
