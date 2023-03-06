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

int timKiem(int x[100][100], int m, int n, int giaTriTimKiem){
	int kq = 0;
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			if(x[i][j]==giaTriTimKiem)
				kq=1;
		}
	}
	return kq;
}
void thucHienTimKiem(int x[100][100], int m, int n){
	int luachon = 0;
	do{
		int giaTriTimKiem;
		printf("\nNhap vao gia tri can tim: ");
		scanf("%d", &giaTriTimKiem);
		int kq = timKiem(x, m, n, giaTriTimKiem);
		if(kq){
			printf("Tim thay gia tri can tim kiem trong ma tran!");
		}else{
			printf("Khong tim thay gia tri can tim kiem trong ma tran!");
		}
	
		printf("\nNhap so bat ky de tieo tuc tim kiem, nhap vao so 0 de thoat");
		scanf("%d", &luachon);
	}while(luachon!=0);
}

int main(){
	nhapMaTran(a, m, n);
	xuatMaTran(a, m, n);
	thucHienTimKiem(a, m, n);
}

