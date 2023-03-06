#include <stdio.h>
int a[100][100];
int b[10000];
int m, n, k;

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

void chuyenMaTranThanhMangMotChieu(int x[100][100], int m, int n, int y[10000], int &k){
	int index = 0;
	k = m*n;
	
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			y[index]=x[i][j];
			index++;
		}
	}
	
	
}

void xuatMangMotChieu(int x[10000], int n){
	printf("\nMang mot chieu: ");
	for(int i=0; i<n; i++){
		printf("%d	", x[i]);
	}
}

int main(){
	nhapMaTran(a, m, n);
	xuatMaTran(a, m, n);
	chuyenMaTranThanhMangMotChieu(a, m, n, b, k);
	xuatMangMotChieu(b, k);	
}
