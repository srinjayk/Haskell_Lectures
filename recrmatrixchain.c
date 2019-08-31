#include<stdio.h>

int memoizedcutrod(int price[],int n,int r[]);
int max(int a,int b);

int main(){

	int m,n;
	scanf("%d %d\n",&m,&n);

	char x[m];
	char y[n];

	int b[m+1][n+1];
	int c[m+1][n+1];

	for(int i = 0;i<m+1;i++)
		for(int j=0;j<n+1;j++)
			b[i][j]=0;

	for(int i = 0;i<m+1;i++)
		for(int j=0;j<n+1;j++)
			c[i][j]=0;

	for(int i = 0; i<m; i++)
		scanf("%c ",&x[i]);

	scanf("\n");

	for(int i = 0; i<n; i++)
		scanf("%c ",&y[i]);


	for(int j=0;j<=n+1;j++)
		c[0][j] = 0;

	for(int i = 1;i<=m+1;i++)
		c[i][0] = 0;

	for(int i=1;i<m+1;i++){
		for(int j=1;j<n+1;j++){
			if(x[i]==y[j]){
				c[i][j]=c[i-1][j-1]+1;
				b[i][j]=11;
			}
			else if(c[i-1][j]>=c[i][j-1]){
				c[i][j] = c[i-1][j];
				b[i][j] = 22;
			}
			else{
				c[i][j] = c[i][j-1];
				b[i][j] = 00;
			}
		}
	}



	for(int i = 0;i<n+1;i++){
		for(int j=0;j<n+1;j++)
			printf("%d %d   ",c[i][j],b[i][j]);
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