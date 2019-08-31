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
  int n;
  cin >>n;
  int arr[7];
  for(int i=0;i<7;i++) cin >>arr[i];
  int sum=0;
  for(int i=0;i<7;i++){
    sum=sum+arr[i];
    if(sum>=n) {
      cout <<i+1;
      break;
    }
  }
	return 0;
}
