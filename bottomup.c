#include<stdio.h>

int memoizedcutrod(int price[],int n,int r[]);
int max(int a,int b);

int main(){

	int n;
	scanf("%d\n",&n);

	/*int arr[n];

	for(int i=0;i<n;i++){
		scanf("%d ",&arr[i]);
	}*/

	int price[n];

	for(int i=0;i<n;i++){
		scanf("%d ",&price[i]);
	}

	int r[n+1];

	int q;

	for(int i=0;i<n+1;i++){
		r[i] = 0;
	}

	for(int j = 1; j < n+1 ; j++){
		for(int i = 1; i < j+1; i++){
			q = max(q,price[i-1]+r[j-i]);
		}
		r[j] = q;
	}

	for(int i=0;i<n+1;i++){
		printf("%d ", r[i]);
	}

	return 0;
}

int memoizedcutrod(int price[],int n,int r[]){
	int q;
	if (r[n] >= 0) return r[n];
	if (n == 0) q=0;
	else{
		q = -100000;
		for(int i = 1;i <= n;i++){
			q = max(q,price[i-1]+memoizedcutrod(price,n-i,r));
		}
	}
	r[n] = q;
	return q;
}

int max(int a,int b){
	if(a>b) return a;
	else return b;
}