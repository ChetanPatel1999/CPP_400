//default argumant in fuction:-
#include<iostream>
using namespace std;
void add(int a=10,int b=10)// args b default value 10
{
    cout<<"a + b = "<<(a+b)<<endl;
}
void displybill(int noitem ,int price=500)
{
 float bill=noitem*price;
 cout<<"total pay amount : "<<bill<<endl;
}
int main()
{
    add(4,8);
    displybill(4);
    return 0;
}