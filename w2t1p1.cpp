#include <iostream>
using namespace std;
void bubbleSort(int arr[], string names[], int n)
{
for (int i = 0; i < n-1; i++)
{
for (int j = 0; j < n-i-1; j++)
{
if (arr[j] > arr[j+1])
{
int temp = arr[j];
arr[j] = arr[j+1];
arr[j+1] = temp;
string tempName = names[j];names[j] = names[j+1];
names[j+1] = tempName;
}
}
}
}
int main()
{
int n;
cout << "Enter the number of employees: ";cin >> n; string names[n];
int salaries[n];
for (int i = 0; i < n; i++)
{
cout << "Enter name of employee " << i + 1 << ": ";
cin >> names[i];
cout << "Enter salary of " << names[i] << ": ";cin >> salaries[i];
}
bubbleSort(salaries, names, n);
cout << "Employees sorted by salary in ascending order:\n";
for (int i = 0; i < n; i++)
{
cout << names[i] << " : " << salaries[i] << endl;
}
return 0;
}
