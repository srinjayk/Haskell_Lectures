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
  string str;
  getline(cin,str);
  int pos1 = str.find("H");
  int pos2 = str.find("Q");
  int pos3 = str.find("9");
  int pos4 = str.find("+");
  if((pos1==-1)&&(pos2==-1)&&(pos3==-1)&&(pos4==-1)) cout <<"NO";
  else cout <<"YES";
	return 0;
}
