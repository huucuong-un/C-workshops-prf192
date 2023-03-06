#include "stdio.h"
int a[100];
int n;
void nhapMang(int x[100], int &n){
	printf("Nhap vao so luong phan tu: ");
	scanf("%d", &n);
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
void xuatMangNguoc(int x[100], int n){
	printf("Gia tri cua mang dao nguoc la: ");
	for(int i=n-1; i>=0; i--){
		printf("%d ", x[i]);
	}
}
void daoNguocMang(int x[100], int n){
	for(int i=0; i<=n/2; i++){
		int temp = x[i];
		x[i]=x[n-i-1];
		x[n-i-1]=temp;
	}
}
int main(){
	nhapMang(a, n);
	xuatMang(a, n);
	printf("\n");
	//xuatMangNguoc(a, n);
	daoNguocMang(a, n);
	xuatMang(a, n);
}
