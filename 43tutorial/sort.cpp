#include<iostream>

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int arr[10] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
	int n = 10;

	/*Here we take two parameters, the beginning of the
	array and the length n upto which we want the array to
	be sorted*/
	sort(arr, arr + n);

	cout << "\nArray after sorting using "
			"default sort is : \n";
	for (int i = 0; i < n; ++i)
		cout << arr[i] << " ";

	return 0;
}
