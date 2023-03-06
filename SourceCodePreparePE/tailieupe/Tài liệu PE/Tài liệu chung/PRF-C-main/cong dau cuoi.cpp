/*#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){ 
int n,sum=0,a,b,j;

char s[10000];
scanf("%d",&n);
scanf("%*c"); 
for (int i=0;i<n;i++)
{   gets(s);
    j=strlen(s);
    if (j==1) printf("%s\n",s);
    else {a=(s[0])-'0';
    b=(s[strlen(s)-1])-'0';
    sum=a+b;
	printf("%d\n",sum);	
	sum=0;
	}
	}}
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){ 
long long n,sum=0,a,b;
scanf("%lld",&n);
for (long long i=0;i<n;i++)
{ scanf("%lld",&a);
	if (a<10) sum=a;
 else {
    b=a%10;
	while(a>9){a=a/10;
	} sum=a+b;
	printf("%lld\n",sum);
}}
return 0;
}
