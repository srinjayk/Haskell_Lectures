// C++ program to demonstrate getline()

#include <iostream>
#include <string.h>
#include <string>
#include <bits/stdc++.h>

using namespace std;

void increment(int* arr,int n){
  for(int i=0;i<n;i++) arr[i]++;
}

int main ()
{
  int n;
  cin >>n;
  int arr[n];
  for(int i=0;i<n;i++) cin >>arr[i];
  increment(arr,n);
  for(int i=0;i<n;i++) cout <<arr[i]<<" ";
  return 0;
}
