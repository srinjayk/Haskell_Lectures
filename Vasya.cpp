// C++ program to demonstrate getline()

#include <iostream>
#include <string.h>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int rightsub(int* arr,int pos,int size){
    int count =0;
    for(int i=pos;i<size-1;i++){
      if(arr[i+1]>arr[i]) break;
      else count++;
    }
    return count;
}

int leftsub(int* arr,int pos,int size){
    int count =0;
    for(int i=pos;i>=0;i--){
      if(arr[i-1]>arr[i]) break;
      else count++;
    }
    return count;
}

int max(int a, int b){
  if(a>=b) return a;
  else return b;
}

int main ()
{
  int n,m;
  cin >>m>>n;
  int arr[n];
  for(int i=0;i<n;i++) cin >>arr[i];
  int arr1[n];
  for(int i=0;i<n;i++) arr1[i]=m-arr[i];
  int sum=0;
  for(int i=0;i<n-1;i++) sum=sum+arr1[i];
  cout <<sum;
	return 0;
}
