#include<iostream>
using namespace std;
int main()
{
    char var1;
    cout<<"enter a char : ";
    cin>>var1;
    cout<<"value of var1 : "<<var1<<endl;
    if(var1>='a' && var1<='z' || var1>='A' && var1<='Z' )
    {
        cout<<"char is alphabet"<<endl;
    }
    else if(var1>='0' && var1<='9')
    {
          cout<<"char digit"<<endl;
    }
    else{
        cout<<"char is special symbol"<<endl;
    }
    return 0;
}
