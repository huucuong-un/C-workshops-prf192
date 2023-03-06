#include "stdio.h"
#include "math.h"
int thoaDieuKien(int x){
	return (x%2==0 && x%3==0);
}
int thoaDieuKienSNT(int x){
	if(x<1)
		return 0;
	for(int i=2; i<=sqrt(x); i++){
		if(x%i==0)
			return 0;
	}
	return 1;
}

int main(){
	int a[100], n;
	do{
		printf("Nhap vao so luong phan tu (0<n<=100): ");
		scanf("%d", &n);
	}while(n<1 ||  n>100);
	
	for(int i=0; i<n; i++){
		printf("a[%d]=", i);
		scanf("%d", &a[i]);
	}
	
	printf("\n Cac so chan va chia het cho 3: ");
	for(int i=0; i<n; i++){
		if(thoaDieuKien(a[i]))
			printf("%d ", a[i]);
	}
	
	printf("\n Cac so nguyen to: ");
	for(int i=0; i<n; i++){
		if(thoaDieuKienSNT(a[i]))
			printf("%d ", a[i]);
	}
	
}
