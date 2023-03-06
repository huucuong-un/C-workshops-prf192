#include<stdio.h>
#include<math.h>
int main() {
   int a,b;
   scanf("%d%d", &a, &b);
   for (int i=0;i<a;i++) printf("*");
   printf("\n");
   for (int i=1;i<b-1;i++){
   	printf("*");
   	for (int j=1;j<a-1;j++) printf("_");
   	printf("*");
   	printf("\n");
   }
   for (int i=0;i<a;i++) printf("*");
}
