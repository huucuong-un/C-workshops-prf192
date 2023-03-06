#include "stdio.h"
#include "limits.h"
int a[100];
int n;
void nhapMang(int x[100], int &n){
	do {
		printf("Nhap vao so luong phan tu: ");
		scanf("%d", &n);
	}while(n<1);
	for(int i=0; i<n; i++){
		printf("Nhap x[%d]:", i);
		scanf("%d", &x[i]);
	}
}
void xuatMang(int x[100], int n){
	printf("Gia tri cua mang la: ");
	for(int i=0; i<n; i++){
		printf("%d ", x[i]);
	}
}
void themVaoCuoiMang(int x[100], int &n, int m){
	int size = sizeof(x)/sizeof(x[0]);
	if (n==size){
		printf("Khong the them vao mang!");
	}
	x[n] = m;
	n++;
}	
void themVaoDauMang(int x[100], int &n, int m){
	int size = sizeof(x)/sizeof(x[0]);
	if (n==size){
		printf("Khong the them vao mang!");
	}
	n++;
	for(int i=n-1; i>0; i--){
		x[i]=x[i-1];
	}
	x[0]=m;
}
void themVaoViTriK(int x[100], int &n, int m, int k){
	int size = sizeof(x)/sizeof(x[0]);
	if (n==size){
		printf("Khong the them vao mang!");
	}
	
	n++;
	for(int i=n-1; i>k; i--){
		x[i]=x[i-1];
	}
	x[k]=m;
}
int main(){
	nhapMang(a, n);
	xuatMang(a, n);
	printf("\n");
	themVaoCuoiMang(a, n, 99);
	printf("\n");
	xuatMang(a, n);
	themVaoDauMang(a, n, 88);
	printf("\n");
	xuatMang(a, n);
	themVaoViTriK(a, n, 77, 3);
	printf("\n");
	xuatMang(a, n);
}
