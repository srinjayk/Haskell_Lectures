// C++ program to demonstrate getline()

#include <iostream>
#include <string>
using namespace std;

int main ()
{
	int x,t,a,b,da,db;
  cin >>x>>t>>a>>b>>da>>db;
  int ta;
  int tb;
  int arr1[t+1];
  for(int i=0;i<t+1;i++){
    arr1[i]=a-i*da;
  }
  int arr2[t+1];
  for(int i=0;i<t+1;i++){
    arr2[i]=b-i*db;
  }
  int arr[(t+1)*(t+1)];
  for(int i=0;i<t+1;i++){
    for(int j=0;j<t+1;j++){
      if((i+j)<=t){
        arr[(t+1)*i+j]=arr1[i]+arr2[j];
      }
      else arr[(t+1)*i+j]=0;
    }
  }
  int symbol=0;
  for(int i=0;i<(t+1)*(t+1);i++){
    if(arr[i]==x) symbol=1;
  }
  if(symbol==0) cout<<"NO";
  else cout<<"YES";
	return 0;
}
