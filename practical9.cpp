#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main()
{

char text[100];
fstream file;
file.open("a.txt",ios::out|ios::in);
cout<<"write text to be a written on file"<<endl;
cin.getline(text,sizeof(text));
file<<text<<endl;
cout<<"+++++++++++REading from file+++++++++\n";
file>>text;
cout<<text<<endl;
cout<<"text length :"<<strlen(text);
file.close();

    return 0;
}
