#include<stdio.h>
#include<math.h>

long ktra(long n)
{    long i,n1, check=1;
    if(n<2) check=0;
    else{ 
        n1=sqrt(n);
        for(i=2; i<=n1; i++) 
        if(n%i==0) {check=0; break;}
        }
    return check;}

int soNguyenTo(int soA)
{
    if (soA < 2)    
        return 0;

    for (int i = 2; i <= sqrt((float)soA); i ++)
    {
        if (soA%i==0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
long n,check;
 scanf("%ld",&n);

printf("%ld",ktra(n)); 
}
