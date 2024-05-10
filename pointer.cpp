//fuction call by reference
#include<iostream>
using namespace std;
int glb=90;//globala varible 
void fun(int *num)
{
  cout<<(*num)<<endl;
  *num=56;
  cout<<(*num)<<endl;
}
using namespace std;
int main()
{
    int a=12;
    cout<<"value of a :"<<a<<endl;
    fun(&a);
    cout<<"value of a :"<<a<<endl;
    return 0;
}