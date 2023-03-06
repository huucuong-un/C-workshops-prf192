#include "stdio.h"
/*int main(){
	int n;
	printf("Nhap vao n = ");
	scanf("%d, &n");
	if(n<20){
		printf("\nSo nhap vao nho hon 20");
	}
} 
int main(){
	int n;
	printf("Nhap vao n = ");
	scanf("%d", &n);
	if(n%2 == 0){
		printf("So nhap vao la so chan");
	}else{
		printf("So nhap vao la so le");
	}
}*/

int main(){
	int n;
	printf("Nhap vao n = ");
	scanf("%d", &n);
	if(n%2 == 0){
		printf("So nhap vao la so chan");
	}else if(n%2==1){
		printf("So nhap vao la so le");
    }
}
