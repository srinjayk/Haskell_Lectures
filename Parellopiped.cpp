// C++ program to demonstrate getline()

#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int max(int m, int n){
  if(n>m) return n;
  else return m;
}

int main(){
  int a,b,c;
  cin >>a>>b>>c;
  int d=a*b*c;
  double e=sqrt(d);
  d=(int)e;
  a=d/a;
  b=d/b;
  c=d/c;
  int f=a+b+c;
  cout <<4*f;
  return 0;
}
