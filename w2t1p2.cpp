#include <iostream>
using namespace std;
void bubbleSort(int arr[], int n)
{
for (int i = 0; i < n; ++i)
{
for (int j = i + 1; j < n; ++j)
{
if (arr[i] > arr[j])
{
int temp = arr[i];
arr[i] = arr[j];
arr[j] = temp;
}
}
}
}
int minimumSumOfProducts(int arr[], int n)
{
bubbleSort(arr, n);
int minSum = 0;
for (int i = 0; i < n / 2; ++i)
{
minSum += arr[i] * arr[n - 1 - i];
}
return minSum;
}
int main()
{
int n;
cout << "Enter the number of elements in the array: ";
cin >> n;
int arr[n];
cout << "Enter the elements of the array: ";
for (int i = 0; i < n; ++i) cin >> arr[i];
int minSum = minimumSumOfProducts(arr, n);
cout << "Minimum sum of the product of consecutive pair elements: " << minSum << endl;
cout << "Sorted array is: ";
for (int i = 0; i < n; ++i) cout << arr[i] << " ";
cout << endl; return 0;
}
