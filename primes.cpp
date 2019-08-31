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
  int arr[n];
  for(int i=0;i<n;i++) cin >>arr[i];
  for(int i=0;i<n;i++){
    int count=0;
    for(int j=1;j<=arr[i];j++){
      if(arr[i]%j==0) count++;
    }
    if(count==3) cout<<"YES"<<endl;
    else cout <<"NO"<<endl;
  }
  return 0;
}
