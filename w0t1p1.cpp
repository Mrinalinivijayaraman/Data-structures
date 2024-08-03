#include<iostream>
using namespace std;
int main()
{
    int n, arr[25],Max,small;
    cout<<"enter number of elements in an array:";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    Max=arr[0];
    small=arr[0];
    for(int i=1;i<n;i++)
    {
        if(Max<arr[i])
        {
            Max=arr[i];
        }
    }
    for(int i=1;i<n;i++)
    {
        if(small>arr[i])
        {
            small=arr[i];
        }
    }

    cout<<"largest element:"<<Max;
    cout<<"smallest element:"<<small;
}
