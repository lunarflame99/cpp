#include <iostream>

using namespace std;

template <class T>
void swaping(T &a,T &b) {
    T temp =a;
    a=b;
    b=temp;
};

int main () {
 double a,b;
 cout<<"Enter two values you want to swap";
 cin>>a;
 cin>>b;
 swaping(a,b);
 cout<<"a="<<a<<"b="<<b;
  return 0;
}
