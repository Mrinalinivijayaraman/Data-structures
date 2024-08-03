#include<iostream>
using namespace std;
int main()
{
    int n,arr[20],val,pos=2,del=4;
    cout<<"enter the number of elements:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the number to be inserted:"<<endl;
    cin>>val;
    for(int i=n;i>pos;i--)
    {
        arr[i]=arr[i-1];

    }
    arr[pos]=val;
    cout<<"insert:";
    for(int i=0;i<n+1;i++)
    {
        cout<<arr[i]<<endl;
    }
    for(int i=del;i<n;i++)
    {
        arr[i]=arr[i+1];

    }
    cout<<"delete:";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }




}
