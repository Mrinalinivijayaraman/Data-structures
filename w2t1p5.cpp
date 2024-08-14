#include <iostream>
using namespace std;
void bubbleSort(int arr[], int n)
{
for (int i = 0; i < n-1; i++)
for (int j = 0; j < n-i-1; j++)
if (arr[j] > arr[j+1])
{
int temp = arr[j];
arr[j] = arr[j+1];
arr[j+1] = temp;
}
}
int absolute(int x)
{
return (x < 0) ? -x : x;
}
int closestThreeSum(int arr[], int n, int X)
{
bubbleSort(arr, n);
int closestSum = arr[0] + arr[1] + arr[2];
for (int i = 0; i < n-2; ++i)
{
int left = i + 1, right = n - 1;
while (left < right)
{
int currentSum = arr[i] + arr[left] + arr[right];
if (absolute(X - currentSum) < absolute(X - closestSum))
closestSum = currentSum;
if (currentSum < X) ++left;
else --right;
}
} return closestSum;
}
int main()
{
int n;
cout << "Enter the number of elements: ";  cin >> n;   int* arr = new int[n];
cout << "Enter the elements of the array: ";
for (int i = 0; i < n; i++) cin >> arr[i];
int X;
cout << "Enter the target value: ";
cin >> X;
cout << "Closest sum to " << X << " is " << closestThreeSum(arr, n, X) << endl;
delete[] arr;
return 0;
}
