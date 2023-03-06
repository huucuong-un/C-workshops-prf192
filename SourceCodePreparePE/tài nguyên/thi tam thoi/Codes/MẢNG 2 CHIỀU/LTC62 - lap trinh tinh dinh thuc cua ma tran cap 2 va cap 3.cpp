#include <stdio.h>
int a[100][100];
int n;

void nhapMaTran(int x[100][100], int &n){
	do{
		printf("Nhap vao n: ");
		scanf("%d", &n);
	}while(n<=0);
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			printf("x[%d][%d]=", i, j);
			scanf("%d", &x[i][j]);
		}
	}
}

void xuatMaTran(int x[100][100], int n){
	printf("\nMang: \n");
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
}

/*
	1 2 3
	4 5 6
	7 8 9
	
	t1 = 1*5*9 + 2*6*7 + 3 *4*8
	=> a[k][l]*a[mod((k+1), n)][mod(l+1, n)] ? vuot qua mang
	
	t2 = 3*5*7 + 2*4*9 + 1*6*8
		=> a[k][l]*a[mod((k+1), n)][mod(l-1, n)] ? vuot qua mang
*/
int tinh_mod(int x, int y){
	int r = x%y;
	return r<0? r+y : r;
}
int tinhDet(int x[100][100], int n){
	int tong_1 = 0;
	int tong_2 = 0;
	
	int k=0;
	for(int l=0; l<n; l++){
		int temp =1;
		for(int t=0; t<n; t++){
			temp = temp*x[tinh_mod((k+t),n)][tinh_mod((l+t), n)];
		}
		tong_1 = tong_1+temp;
	}
	
	k=0;
	for(int l=0; l<n; l++){
		int temp =1;
		for(int t=0; t<n; t++){
			temp = temp*x[tinh_mod((k+t), n)][tinh_mod((l-t), n)];
		}
		tong_2 = tong_2+temp;
	}
	return tong_1-tong_2; 
}
int main(){
	nhapMaTran(a, n);
	xuatMaTran(a, n);
	printf("det(x) = %d", tinhDet(a, n));	
}
