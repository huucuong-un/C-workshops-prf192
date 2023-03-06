#include<stdio.h>
int main(){
    int size;
    printf("nhap size: ");
    scanf("%d",&size);
    for(int i=0;i<size;i++){
        for(int j=0;j<i;j++){
            printf(" ");
        }
        for(int j=i;j<size;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}