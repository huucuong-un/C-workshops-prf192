#include<conio.h>
#include<stdio.h>
//ve hinh chu nhat *

//void HCN(int n, int m, char c = '*')
//{
//    for(int i=1;i<=n;i++)
//    {
//        for(int j=1;j<=m;j++)
//        printf("%c",c);
//        printf("\n");
//    }
//}
//void TG(int n)
//{
//    for(int k=1;k<=n;k++)
//    HCN(1,k,'=');
//}
//void TGC(int n)
//{
//    for(int i=1;i<=n;i++)
//    {
//        for(int j=1;j<=n-i;j++) printf(" ");
//        for(int j=1;j<=2*i-1;j++) printf("*");
//        printf("\n");
//    }
//}
void QuaTram(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++) printf(" ");
        for(int j=1;j<=i;j++) printf("* ");
        printf("\n");
    }
    for(int i=n-1;i>=1;i--)
    {
        for(int j=1;j<=n-i;j++) printf(" ");
        for(int j=1;j<=i;j++) printf("* ");
        printf("\n");
    }
}
int main()
{
    int n,m;
    printf("\nNhap n : "); scanf("%d",&n);
    //printf("\nNhap m : "); scanf("%d",&m);
    //clrscr();
    //TGC(n);
    QuaTram(n);
    getch();
}
