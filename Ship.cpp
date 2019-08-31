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
  int n;
  cin >>n;
  scanf("\n");
  string str[n];
  for (int i = 0; i < n; i++) {
    getline(cin,str[i]);
    scanf("\n");
  }

  for (int i = 0; i < n; i++) {
    int pos = str[i].find("rat");
    if(pos!=-1){
      string sub = str[i].substr(0,pos);
      cout <<sub<<endl;
    }
  }

  for (int i = 0; i < n; i++) {
    int pos = str[i].find("woman");
    if(pos!=-1){
      string sub = str[i].substr(0,pos);
      cout <<sub<<endl;
    }
  }

  for (int i = 0; i < n; i++) {
    int pos = str[i].find("child");
    if(pos!=-1){
      string sub = str[i].substr(0,pos);
      cout <<sub<<endl;
    }
  }

  for (int i = 0; i < n; i++) {
    int pos = str[i].find(" man");
    if(pos!=-1){
      string sub = str[i].substr(0,pos);
      cout <<sub<<endl;
    }
  }

  for (int i = 0; i < n; i++) {
    int pos = str[i].find("captain");
    if(pos!=-1){
      string sub = str[i].substr(0,pos);
      cout <<sub<<endl;
    }
  }


	return 0;
}
