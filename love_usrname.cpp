// C++ program to demonstrate getline()

#include <iostream>
#include <string>
using namespace std;

int main ()
{
	int n;
	cin >>n;
	int arr[n];
	scanf("\n");
	for(int i=0;i<n;i++){
		cin >>arr[i];
	}
	int min_max[n][2];
	min_max[0][0]=arr[0];
	min_max[0][1]=arr[0];
	int count=0;
	for(int i=1;i<n;i++){
		if(arr[i]>min_max[i-1][0]) {min_max[i][0]=arr[i];count++;}
		else min_max[i][0]=min_max[i-1][0];
		if(arr[i]<min_max[i-1][1]) {min_max[i][1]=arr[i];count++;}
		else min_max[i][1]=min_max[i-1][1];
	}
	cout<<count;
	return 0;
}
