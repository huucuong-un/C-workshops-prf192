#include <stdio.h>


int gcd(int a, int b) {
    int tmp;
    while(b != 0) {
        tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}


int main()
{
 int a,b;
 scanf("%d%d", &a, &b);

 printf("%d",a*b/gcd(a,b));
 return 0;
}
