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
  int n,m;
  cin >>n>>m;
  int arr[2*n+1];
  for(int i=0;i<2*n+1;i++) cin >>arr[i];
  for(int i=1;i<2*n+1;i=i+2){
    if(((arr[i]>arr[i-1]+1)&&(arr[i]>arr[i-1]+1))&&(m>0)){
      arr[i]--;
      m--;
    }
  }
  for(int i=0;i<2*n+1;i++) cout <<arr[i]<<" ";

	return 0;
}
