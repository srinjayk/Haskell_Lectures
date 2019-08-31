// C++ program to demonstrate getline()

#include <iostream>
#include <string>
using namespace std;

int CountUniqueCharacters(string str){
    int count = 0;

    for (int i = 0; i < str.length(); i++){
         bool appears = false;
         for (int j = 0; j < i; j++){
              if (str[j] == str[i]){
                  appears = true;
                  break;
              }
         }

         if (!appears){
             count++;
         }
    }

    return count;
}

int main ()
{
	string str;
	getline (cin, str);
	int h=CountUniqueCharacters(str);
  if(h%2==0) cout<<"CHAT WITH HER!"<<endl;
  else cout<<"IGNORE HIM!"<<endl;

	return 0;
}
