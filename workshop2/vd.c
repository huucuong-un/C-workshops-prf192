#include <stdio.h>
int a[100];  
int main() 
{
     int i,j,n,k;  
     printf("Nhap so mang cua phan tu: "); 
     scanf("%d", &n);  
     for (i = 0; i < n; i++) 
     {
      printf("nhap phan tu thu %d: ", i + 1);
      scanf("%d", &a[i]); 
     }
     for (i = 0; i < n-1;i++){
         for (j = i+1; j < n;j++){
             if (a[i]>a[j]) 
             {
                  k = a[i];  
                  a[i] = a[j];  
                  a[j] = k;  
             }
         }
     }
     printf("mang sau khi da sap xep la:\n");
     for (i = 0; i < n; i++) {
          printf(" %d ", a[i]); 
     }
}
