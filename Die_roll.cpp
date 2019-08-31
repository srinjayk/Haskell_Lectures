// C++ program to demonstrate getline()

#include <iostream>
#include <string>
using namespace std;

int max(int m, int n){
  if(n>m) return n;
  else return m;
}

int main(){
  int n,m;
  cin >>n>>m;
  int h=max(n,m);
  if(h==1) cout <<"1/1"<<endl;
  else if(h==2) cout <<"5/6"<<endl;
  else if(h==3) cout <<"2/3"<<endl;
  else if(h==4) cout <<"1/2"<<endl;
  else if(h==5) cout <<"1/3"<<endl;
  else cout <<"1/6"<<endl;

  return 0;
}
