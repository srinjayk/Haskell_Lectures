// C++ program to demonstrate getline()

#include <iostream>
#include <string>
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
	string str;
  int num1,num2;
	getline (cin, str);
  char c1 = '4';
  char c2 = '7';
	num1=count(str, c1);
	num2=count(str, c2);
  if(num1==num2) cout <<"4";
  else if(num1>num2) cout <<"4";
  else cout <<"7";
	return 0;
}
