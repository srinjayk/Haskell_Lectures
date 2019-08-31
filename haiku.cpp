// C++ program to demonstrate getline()

#include <iostream>
#include <string>
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
	string str[3];
	getline(cin,str[0]);
	scanf("\n");
	getline(cin,str[1]);
	scanf("\n");
	getline(cin,str[2]);
	int arr[3][5];
	char c1 = 'a';
  char c2 = 'e';
	char c3 = 'i';
  char c4 = 'o';
	char c5 = 'u';
	for(int i=0;i<3;i++){
		arr[i][0]=count(str[i],c1);
		arr[i][1]=count(str[i],c2);
		arr[i][2]=count(str[i],c3);
		arr[i][3]=count(str[i],c4);
		arr[i][4]=count(str[i],c5);
	}
	int sum=0;
	// for(int i=0;i<3;i++){
	// 	for(int j=0;j<5;j++){
	// 		cout <<arr[i][j]<<" ";
	// 	}
	// 	printf("\n");
	// }
	for(int i=0;i<3;i++){
		for(int j=0;j<5;j++){
			sum=sum+arr[i][j];
		}
	}
	//cout <<sum;
	if(sum==17) cout <<"Haiku";
	else cout <<"Not Haiku";
	return 0;
}
