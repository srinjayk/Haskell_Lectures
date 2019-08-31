// C++ program to demonstrate getline()

#include <iostream>
#include <string>
using namespace std;

int max(int m, int n){
  if(n>m) return n;
  else return m;
}

int main(){
  int n;
  cin >>n;
  int arr[n];
  scanf("\n");
  for(int i=0;i<n;i++){
    cin >>arr[i];
  }
  int sum=0;
  for(int i=0;i<n;i++){
    sum=sum+arr[i];
  }
  int g=sum%n;
  cout <<n-g<<endl;
  return 0;
}
