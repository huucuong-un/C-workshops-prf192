#include "stdio.h"
int main(){
	//Khai bao bien
	int a, b, min, max;
	//Nhap du lieu
	printf("Nhap vao a = ");
	scanf("%d", &a);
	printf("Nhap vao b = ");
	scanf("%d", &b);
	//Xu ly
	max = (a>b)?a:b;
	min = (a<b)?a:b;
	//Xuat du lieu
	printf("\nMax = %d", max);
	printf("\nMin = %d", min);
}
