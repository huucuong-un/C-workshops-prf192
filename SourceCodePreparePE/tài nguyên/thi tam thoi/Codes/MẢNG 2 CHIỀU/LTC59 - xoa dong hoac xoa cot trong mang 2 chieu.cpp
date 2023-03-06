#include <stdio.h>
int a[100][100];
int m, n;

void nhapMaTran(int x[100][100], int &m, int &n){
	do{
		printf("Nhap vao m va n: ");
		scanf("%d%d", &m, &n);
	}while(m<=0 || n<=0);
	
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			printf("x[%d][%d]=", i, j);
			scanf("%d", &x[i][j]);
		}
	}
}

void xuatMaTran(int x[100][100], int m, int n){
	printf("\nMang: \n");
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
}

void xoaDongMaTran(int x[100][100], int &m, int n, int k){
	if(k<0 || k>=m)
		return;
		
	for(int i=k; i<m-1; i++){
		for(int j=0; j<n; j++){
			x[i][j]=x[i+1][j];
		}
	}
	m = m - 1;
}

void xoaCotMaTran(int x[100][100], int m, int &n, int k){
	if(k<0 || k>=n)
		return;
		
	for(int i=0; i<m; i++){
		for(int j=k; j<n-1; j++){
			x[i][j]=x[i][j+1];
		}
	}
	n = n - 1;
}

int main(){
	nhapMaTran(a, m, n);
	xuatMaTran(a, m, n);
//	xoaDongMaTran(a, m , n , 1);
//	xuatMaTran(a, m, n);
	xoaCotMaTran(a, m, n, 1);
	xuatMaTran(a, m, n);
}
