#include "stdio.h"
int main(){
	int a, b;
	printf("Nhap vao a = ");
	scanf("\n%d", &a);
	printf("\nNhap vao b = ");
	scanf("\n%d", &b);
	printf("\n%d == %d la %d", a, b, a == b);
	printf("\n%d > %d la %d", a, b, a > b);
	printf("\n%d < %d la %d", a, b, a < b);
	printf("\n%d >= %d la %d", a, b, a >= b);
	printf("\n%d <= %d la %d", a, b, a <= b);
	printf("\n%d != %d la %d", a, b, a != b);
}
