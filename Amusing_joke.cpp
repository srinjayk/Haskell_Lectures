// C++ program to sort a string of characters
#include<bits/stdc++.h>
using namespace std;

// function to print string in sorted order
void sortString(string &str)
{
sort(str.begin(), str.end());
//cout << str;
}

// Driver program to test above function
int main()
{
	string s1,s2,s3,s4;
	getline(cin,s1);
	scanf("\n");
	getline(cin,s2);
	scanf("\n");
	getline(cin,s3);
	s4=s1+s2;
	sortString(s4);
	sortString(s3);
	//cout<<s4<<endl<<s3;
	if(s4==s3) cout<<"YES";
	else cout<<"NO";
	return 0;
}
