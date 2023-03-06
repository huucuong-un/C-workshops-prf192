#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,j;
    
    printf("So hang cua tam giac la = ");
    scanf("%d",&n);
for (i = n; i > 0; i--)
    {
    for (j = 1; j <= i; j++)
            printf("*");
            printf("\n");
    }
    getch();
}