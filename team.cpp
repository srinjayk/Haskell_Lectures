// C++ program to demonstrate getline()

#include <iostream>
#include <string.h>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main ()
{
  int n;
  cin >>n;
  int arr[n][3];
  for(int i=0;i<n;i++){
    for(int j=0;j<3;j++){
      cin >>arr[i][j];
    }
  }
  int arr1[n];
  for(int i=0;i<n;i++) arr1[i]=arr[i][0]+arr[i][1]+arr[i][2];
  int count=0;
  for (int i=0;i<n;i++){
    if(arr1[i]>=2) count++;
  }
  cout <<count;
  return 0;
}
