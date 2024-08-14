#include <iostream>
using namespace std;
void selectionSort(int arr[], string names[], int n)
{
for (int i = 0; i < n-1; i++)
{ int minIdx = i;
for (int j = i+1; j < n; j++)
{
if (arr[j] < arr[minIdx])
{
minIdx = j;
}
}
int temp = arr[minIdx];
arr[minIdx] = arr[i];  arr[i] = temp;
string tempName = names[minIdx];
names[minIdx] = names[i];  names[i] = tempName;
}
}
int main()
{
int n;
cout << "Enter the number of students: ";  cin >> n;  string names[n];  int grades[n];
for (int i = 0; i < n; i++)
{
cout << "Enter name of student " << i + 1 << ": ";  cin >> names[i];
cout << "Enter grade of " << names[i] << ": ";
cin >>grades[i];
}
selectionSort(grades, names, n);
cout << "Students sorted by grades in ascending order:\n";
for (int i = 0; i < n; i++)
{
cout << names[i] << " : " << grades[i] << endl;
}
return 0;
}
