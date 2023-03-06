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
void thayDoiGiaTri2Dong(int x[100][100], int m, int n, int k, int y){
	/*
	1 2 3
	4 5 6
	7 8 9
	k = 1
	y = 2
	
	1 2 3
	7 8 9
	4 5 6
	*/

	for(int i=0; i<n; i++){
		int temp = x[k][i];
		x[k][i]=x[y][i];
		x[y][i]=temp;
	}
}

void thayDoiGiaTri2Cot(int x[100][100], int m, int n, int k, int y){
	/*
	1 2 3
	4 5 6
	7 8 9
	k = 1
	y = 2
	
	1 3 2
	4 6 5
	7 9 8
		*/

	for(int i=0; i<m; i++){
		int temp = x[i][k];
		x[i][k]=x[i][y];
		x[i][y]=temp;
	}
}

int main(){
	nhapMaTran(a, m, n);
	xuatMaTran(a, m, n);
//	thayDoiGiaTri2Dong(a, m, n, 1, 2);
//	xuatMaTran(a, m, n);
	thayDoiGiaTri2Cot(a, m, n , 1 , 2);
	xuatMaTran(a, m, n );
}

