//medium qn 1
#include<iostream>
using namespace std;
int main() {
    int arr[20],n;
    cout<<"Enter size of array:";
    cin>>n;
    cout<<"enter the elements:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int fstMin, secMin;
    int fstMax, secMax;
     if (arr[0] < arr[1]) {
        fstMin = arr[0];
        secMin = arr[1];
    } else {
        fstMin = arr[1];
        secMin = arr[0];
    }
    if (arr[0] > arr[1]) {
        fstMax = arr[0];
        secMax = arr[1];
    } else {
        fstMax = arr[1];
        secMax = arr[0];
    }
 for (int i = 2; i < n; ++i) {
        if (arr[i] < fstMin) {
            secMin = fstMin;
            fstMin = arr[i];
        }

        if (arr[i] > fstMax) {
            secMax = fstMax;
            fstMax = arr[i];
        }
 }
    cout << "Second Minimum Element: " << secMin << endl;
    cout << "Second Maximum Element: " << secMax << endl;
    return 0;
}

