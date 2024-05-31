#include<iostream>
using namespace std;
class circle
{
    float radius;
    float area;
    float circumference;
    public:
    circle(int a)
    {
        radius=a;
    }
    void calculatearae()
    {
        area=3.141*radius*radius;
        cout<<"Area of circle which radius "<<radius<<" = "<<area<<endl;
    }
    void calculatecircumference()
    {
        circumference=2*3.141*radius;
         cout<<"circumference of circle which radius "<<radius<<" = "<<circumference<<endl;
    }
};
int main()
{
  circle c1(5),c2(7);
  c1.calculatearae();
  c1.calculatecircumference();
  c2.calculatearae();
  c2.calculatecircumference();
    return 0;
}