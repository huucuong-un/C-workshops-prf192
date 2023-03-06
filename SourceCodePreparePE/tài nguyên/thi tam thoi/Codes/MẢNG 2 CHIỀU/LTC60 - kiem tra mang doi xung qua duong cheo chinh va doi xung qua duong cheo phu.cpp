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
	
	1 2 3 5
	2 1 4 6
	3 4 1 1
	5 6 1 1
	
	x[i][j] = x[j][i]
	x[1][2] = 4 
	x[2][1] = 4 
	
	9 2 3
	4 5 2
	7 4 9
	
	x[0][1]	= x[1][2]
	x[0][0] = x[2][2]
	x[1][0] = x[2][1]
	x[i][j] = x[n-1-j][n-1-i]
*/

int kiemTraDoiXungQuaDuongCheoChinh(int x[100][100], int n){
	for(int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			if(x[i][j]!=x[j][i]){
				return 0;
			}
		}
	}
	return 1;
}
int kiemTraDoiXungQuaDuongCheoPhu(int x[100][100], int n){
	for(int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			if(x[i][j]!=x[n-1-j][n-1-i]){
				return 0;
			}
		}
	}
	return 1;
}

int main(){
	nhapMaTran(a, n);
	xuatMaTran(a, n);
	printf("%s", (kiemTraDoiXungQuaDuongCheoChinh(a, n)==1?"Mang doi xung qua duong cheo chinh":"Mang khong doi xung qua duong cheo chinh"));
	printf("\n");
	printf("%s", (kiemTraDoiXungQuaDuongCheoPhu(a, n)==1?"Mang doi xung qua duong cheo phu":"Mang khong doi xung qua duong cheo phu"));
	
}
