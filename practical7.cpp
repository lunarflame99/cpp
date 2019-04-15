#include <iostream>
using namespace std;
class planet{
public:
double distance=500,angle=7.2;
virtual void display(){}
};

class earth:public planet{
public:
double circumference;
earth(){
circumference=(360/angle)*distance;
}
void display(){cout<<"circumference of earth is :"<<circumference<<" miles approximmately.";
};
};

int main()
{
    planet *ptr;
    earth e1;
    ptr=&e1;
    ptr->display();
    return 0;
}

