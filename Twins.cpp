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
	sort(arr, arr + n);
	int sum=0;
	for (int i = 0; i < n; i++) {
		sum=sum+arr[i];
	}
	int curr_sum=0;
	for (int i = 0; i < n; i++) {
		curr_sum=curr_sum+arr[i];
		if(curr_sum>sum/2){
			cout <<i+1;
			break;
		}
	}
	return 0;
}
