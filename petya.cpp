// C++ program to demonstrate getline()

#include <iostream>
#include <string.h>
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
  int arr[n];
  for(int i=0;i<n;i++) cin >>arr[i];
  int sub[n][2];
  for(int i=0;i<n;i++){
    sub[i][0]=rightsub(arr,i,n);
    sub[i][1]=leftsub(arr,i,n);
  }
  // for(int i=0;i<n;i++){
  //   cout <<sub[i][0]<<" "<<sub[i][1]<<endl;
  // }int fin[n];
  int fin[n];
  for(int i=0;i<n;i++) fin[i]=sub[i][0]+sub[i][1];
  int maxim=0;
  for (int i = 0; i < n; i++) maxim=max(maxim,fin[i]);
  cout <<maxim+1;

	return 0;
}
