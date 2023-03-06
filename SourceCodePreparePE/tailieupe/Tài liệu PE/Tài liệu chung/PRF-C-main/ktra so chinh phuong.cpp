#include <stdio.h>
#include <math.h>
int main(){
    int n;
    printf("\nNhap n = ");
    scanf("%d", &n);
    int sqr = sqrt(n);
    if(sqr*sqr == n){
        printf("%d la so chinh phuong!\n", n);
    }else{
        printf("%d khong phai so chinh phuong!\n", n);
    }
}
