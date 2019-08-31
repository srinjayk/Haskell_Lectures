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

void rvereseArray(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
} 

int main ()
{
  int n;
  cin >>n;
  int arr[n];
  double pi=3.1415926536;
  for(int i=0;i<n;i++) cin >>arr[i];
  sort(arr,arr+n);
  rvereseArray(arr, 0, n-1);
  double area=0;
  for(int i=0;i<n;i++){
    if(i%2==0){
      area=area+pi*arr[i]*arr[i];
    }
    else{
      area=area-pi*arr[i]*arr[i];
    }
  }
  cout <<area;
  return 0;
}
