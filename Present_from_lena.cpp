// C++ program to demonstrate getline()

#include <iostream>
#include <string>

using namespace std;

void print_space(int n) {
	for(int i=0;i<n;i++){
		cout <<"  ";
	}
}

void print_sequence(int n) {
	for(int i=0;i<=n;i++){
		cout <<i<<" ";
	}
}

void print_reverse(int n) {
	for(int i=n;i>=0;i--){
		cout <<i<<" ";
	}
}

int main ()
{
	int n;
	cin >>n;

	for (int i = 0; i <= n; i++) {
		print_space(n-i);
		print_sequence(i);
		print_reverse(i-1);
		printf("\n");
	}

	for (int i = n-1; i >= 0; i--) {
		print_space(n-i);
		print_sequence(i);
		print_reverse(i-1);
		printf("\n");
	}

	return 0;
}
