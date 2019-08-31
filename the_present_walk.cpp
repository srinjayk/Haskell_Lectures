// C++ program to demonstrate getline()

#include <iostream>
#include <string.h>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int max(int a,int b){
  if(a>=b) return a;
  else return b;
}

int main ()
{
  int n,m;
  cin >>n>>m;
  int arr[n];
  for(int i=0;i<n;i++) cin >>arr[i];
  int count=0;
  int count_curr=1;
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      if(arr[j-1]!=arr[j]) count_curr++;
      else break;
    }
    //cout <<count_curr<<endl;
    count=max(count,count_curr);
    count_curr=1;
  }
  cout <<count;
  return 0;
}
