#include "stdio.h"
int main(){
	int a, b;
	printf("Nhap vao a = ");
	scanf("%d", &a);
	printf("Nhap vao b = ");
	scanf("%d", &b);
	float ketqua = (float)a/b;
	printf("%d/%d=%.2f", a, b, ketqua);
}
