// C++ program to demonstrate getline()

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int max(int m, int n){
  if(n>m) return n;
  else return m;
}

int main(){
  int m,n;
  cin >>m;
  scanf("\n");
  cin >>n;
  vector<int> num1;
  vector<int> num2;
  vector<int> numor;
  int a=m;
  int b=n;
  int c=a+b;

  do{
    if(c%10!=0) numor.push_back(c%10);
    c=c/10;
  }while(c!=0);
  for (auto i = num1.begin(); i != num1.end(); ++i)
        cout << *i << " ";
  int w=numor.size();
  int arror[w];
  int k=0;
  for (auto i = num1.begin(); i != num1.end(); ++i){
    arror[k]=*i;
  }

  do{
    if(a%10!=0) num1.push_back(a%10);
    a=a/10;
  }while(a!=0);
  for (auto i = num1.begin(); i != num1.end(); ++i)
        cout << *i << " ";
  int j=num1.size();
  int arr1[j];
  k=0;
  for (auto i = num1.begin(); i != num1.end(); ++i){
    arr1[k]=*i;
  }
  //cout << *i << " ";
  //cout <<j<<endl;

  do{
    if(b%10!=0) num2.push_back(b%10);
    b=b/10;
  }while(b!=0);
  for (auto i = num2.begin(); i != num2.end(); ++i)
        cout << *i << " ";
  int y=num2.size();
  int arr2[y];
  k=0;
  for (auto i = num1.begin(); i != num1.end(); ++i){
    arr2[k]=*i;
  }

  if(j>k) int t=j;
  else int t=k;

  int arr3[t];
  for(int i=0;i<t;i++){
    arr3[i]=arr1[i]+arr2[i];
  }

  for(int i=0;i<w;i++){
    if(arr3[i]!=arror[i]){
      cout<<"NO";
      break;
    }
  }
  cout <<"YES";

  //cout <<j<<endl;
  return 0;
}
