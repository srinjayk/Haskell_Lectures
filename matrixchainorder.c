#include<stdio.h>

int memoizedcutrod(int price[],int n,int r[]);
int max(int a,int b);

int main(){

	int p;
	scanf("%d\n",&p);

	/*int arr[n];

	for(int i=0;i<n;i++){
		scanf("%d ",&arr[i]);
	}*/

	int dim[p];
	int n = p-1;

	int q;

	for(int i = 0; i<p; i++)
		scanf("%d ",&dim[i]);

	int m[n+1][n+1];
	int s[n+1][n+1];

	for(int i = 0;i<n+1;i++)
		for(int j=0;j<n+1;j++)
			m[i][j]=0;

	for(int i = 0;i<n+1;i++)
		for(int j=0;j<n+1;j++)
			s[i][j]=0;

	for(int i = 1;i<n+1;i++)
		m[i][i]=0;

	int j;

	for(int l=2;l<n+1;l++){
		for(int i=1;i<=n-l+1;i++){
			j=i+l-1;
			m[i][j] = 100000;
			for(int k=i;k<=j-1;k++){
				q = m[i][k] + m[k+1][j] + dim[i-1]*dim[k]*dim[j];
				if(q < m[i][j]){
					m[i][j] = q;
					s[i][j] = k;
				}
			}
		}
	}

	for(int i = 0;i<n+1;i++){
		for(int j=0;j<n+1;j++)
			printf("%d ",m[i][j]);
		printf("\n");
	}

	for(int i = 0;i<n+1;i++){
		for(int j=0;j<n+1;j++)
			printf("%d ",s[i][j]);
		printf("\n");
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