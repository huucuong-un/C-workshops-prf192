#include "stdio.h"
int main(){
	int x;
	float y;
	char c;
	// Nhap ki tu
	printf("Nhap vao ki tu: ");
	scanf("%c", &c);
	printf("\nKi tu vua nhap la: %c", c);
	// Nhap so nguyen
	printf("\nNhap vao gia tri so nguyen x: ");
	scanf("%d", &x);
	printf("\nGia tri x da nhap la: %d", x);
	// Nhap so thuc
	printf("\nNhap vao gia tri so thuc y: ");
	scanf("%f", &y);
	printf("\nGia tri y da nhap la: %.1f", y);
	// Nhap nhieu du lieu mot hang
	float x1, x2, x3;
	printf("\nNhap vao gia tri cua x1, x2, x3 = ");
	scanf("%f%f%f", &x1, &x2, &x3);
	printf("\nx1 = %.1f, x2 = %.1f, x3 = %.1f", x1, x2, x3);
}
