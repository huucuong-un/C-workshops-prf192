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

double trungBinhCongTatCa(int x[100][100], int m, int n){
	if(m<=0 || n<=0)
		return 0;
		
	int tong = 0;
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			tong+=x[i][j];
		}
	}
	double trungBinhCong = (double)tong/(m*n);
	return trungBinhCong;
}

double trungBinhCongChiaHetCho5(int x[100][100], int m, int n){
		if(m<=0 || n<=0)
		return 0;
		
	int tongChiaHetCho5 = 0;
	int soLuongChiaHetCho5 =0;
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			if(x[i][j]%5==0){
				soLuongChiaHetCho5++;
				tongChiaHetCho5+=x[i][j];				
			}
		}
	}
	
	double trungBinhCong = 0;
	if (soLuongChiaHetCho5>0)
		trungBinhCong = (double)tongChiaHetCho5/soLuongChiaHetCho5;
		
	return trungBinhCong;
}
int main(){
	nhapMaTran(a, m, n);
	xuatMaTran(a, m, n);
	printf("TBC tat ca la: %.2f", trungBinhCongTatCa(a, m, n));
	printf("\n");
	printf("TBC chia het cho 5 la: %.2f", trungBinhCongChiaHetCho5(a, m, n));
}
