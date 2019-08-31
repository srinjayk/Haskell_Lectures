// C++ program to demonstrate getline()

#include <iostream>
#include <string.h>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main ()
{
  int n;
  int arr[n-1];
  for(int i=0;i<n-1;i++) cin >>arr[i];
  int a,b;
  cin >>a>>b;
  int sum=0;
  for(int i=a-1;i<b-1;i++) sum=sum+arr[i];
  cout <<sum;
}
