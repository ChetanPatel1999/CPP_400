#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter array size : ";
    cin>>n;
    int a[n];
    int i;
    cout<<"enter array elemet : "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"array elemet are : "<<endl;
    for(i=0;i<n;i++)
    {
     cout<<((a[i]))<<endl;
    }
    int sum=0;
    for(i=0;i<n;i++)
    {
     sum=sum+a[i];
    }
    cout<<endl<<"sum of all element : "<<sum<<endl;
    
    return 0;
}