#include <iostream>
using namespace std;
class Distance {
public:
    int feet, inch;
    Distance()
    {
        feet = 0;
        inch = 0;
    }
    Distance(int f, int i)
    {
      feet = f;
      inch = i;
    }

    void display(){
    cout<<feet<<" "<<inch<<endl;
    }

friend Distance operator-(Distance&, Distance&);
Distance operator - ()
{
    feet = -feet;
    inch = -inch;
    return Distance(feet,inch);
}
};

Distance operator - (Distance &d1, Distance &d2)
{
    Distance d3;
    d3.feet = d1.feet - d2.feet;
    d3.inch = d1.inch - d2.inch;
    return d3;
}

int main()
{
Distance d1(12,23),d2(23,34),d3;
-d1;
d1.display();
-d2;
d2.display();
d3=d1-d2;
d3.display();
    return 0;
}
