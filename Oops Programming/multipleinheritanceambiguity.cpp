#include<iostream>
using namespace std;
class base1
{
    public :
    void greet()
    {
        cout<<"good morning"<<endl;
    }
};
class base2
{
    public :
    void greet()
    {
        cout<<"good after noon"<<endl;
    }
};
class derived:public base1,public base2
{
    public:
    void greet()
    {
        
       base2::greet();
    }
};
int main()
{
    derived b;
    b.greet();
    return 0;
}