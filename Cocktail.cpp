// C++ program to demonstrate getline()

#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main ()
{
	int n;
	cin >>n;
	int arr[n]
	for (int i = 0; i < n; i++) {
		cin >>arr[i];
	}
	int sum=0;
	for (int i = 0; i < n; i++) {
		sum=sum+arr[i];
	}
	int j=n*100;
	float f=(float)sum/j;
	cout <<f*100;

	return 0;
}
