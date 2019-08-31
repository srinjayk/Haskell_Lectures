// C++ program to demonstrate getline()

#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

int count(string s, char c)
{
    // Count variable
    int res = 0;

    for (int i=0;i<s.length();i++)

        // checking character in string
        if (s[i] == c)
            res++;

    return res;
}

int main ()
{
  int m,n,o;
  cin >>m>>n>>o;
  int h=o/n;
  if(o%n==0) h=h+1;
  int arr[h+1];
  for (int i = 0; i < h+1; i++) {
    arr[i]=n*i;
  }
  int arr1[h+1];
  for (int i = 0; i < h+1; i++) {
    int y=arr[i]-m;
    if(y<=0) arr1[i]=0;
    else arr1[i]=y;
  }
  for (int i = 0; i < h+1; i++) {
    if(arr1[i]!=0) cout<<arr1[i]<<" ";
  }

	return 0;
}
