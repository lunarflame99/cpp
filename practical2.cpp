#include <iostream>
using namespace std;
class ABC{
private:
int x,y,z;
public:
ABC(int a,int b,int c){
x=a;
y=b;
z=c;
}//initialling variables
void display(){
cout<<x<<" "<<y<<" "<<z<<"\n";
}
void XYZ(ABC &t){
x=t.x;
y=t.y;
z=t.z;
}
};

int main()
{
    ABC obj(12,23,34);
    obj.display();
    ABC obj1(obj);
    obj1.display();
    return 0;
}
