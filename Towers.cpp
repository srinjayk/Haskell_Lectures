// CPP program to find the most frequent element
// in an array.
#include <bits/stdc++.h>
using namespace std;

int mostFrequent(int arr[], int n)
{
	// Sort the array
	sort(arr, arr + n);

	// find the max frequency using linear traversal
	int max_count = 1, res = arr[0], curr_count = 1;
	for (int i = 1; i < n; i++) {
		if (arr[i] == arr[i - 1])
			curr_count++;
		else {
			if (curr_count > max_count) {
				max_count = curr_count;
				res = arr[i - 1];
			}
			curr_count = 1;
		}
	}

	// If last element is most frequent
	if (curr_count > max_count)
	{
		max_count = curr_count;
		res = arr[n - 1];
	}

	return res;
}

// driver program
int main()
{
	int n;
	cin >>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin >>arr[i];
	}
	sort(arr, arr + n);
	int unique = 1; //incase we have only one element; it is unique!
  for(int i = 0; i < n -1 /*since we don't want to compare last element with junk*/; i++)
    {
     if(arr[i]==arr[i+1])
       continue;
     else
       unique++;
    }
	int h=mostFrequent(arr,n);
	int count=0;
	for(int i=0;i<n;i++){
		if(arr[i]==h) count++;
	}

	cout <<count<<" "<<unique;

	return 0;
}
