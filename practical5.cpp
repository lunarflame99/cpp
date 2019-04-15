#include <iostream>
using namespace std;

class planet{
public:
double distance=500,angle=7.2;
};

class earth:public planet{
public:
double circumference;
earth(){
circumference=(360/angle)*distance;
cout<<"circumference of earth is :"<<circumference<<" miles approximmately.";
}
};

int main()
{
    earth e1;
    return 0;
}
