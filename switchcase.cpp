#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"enter state short name : ";
    cin>>ch;
    switch(ch)
    {
        case 'm':
        cout<<"madhya pradesh"<<endl;
        break;
        case 'r' :
        cout<<"rajsthan"<<endl;
        break;
        case 'u':
        cout<<"uttar pradesh"<<endl;
        break;
        default :
        cout<<"please enter right short state name";
    }
    return 0;
}