#include<iostream>
using namespace std;
int main()
{
    int n,arr[50],sum=0,pro=1;
    cout<<"enter the no of elemnts in arr:";
    cin>>n;

    for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
        }

    for(int i=1;i<=n;i++)
    {
        sum+=arr[i];
        pro*=arr[i];
    }
        cout<<"sum is:"<<sum;
        cout<<"product is:"<<pro;

}
