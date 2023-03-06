#include<stdio.h>
#include<string.h>
int main()
{
int n;
char s[100];
gets(s);
n=strlen(s); 
if (n<=5) puts(s);
else {	
	if(n%2!=0) {	for (int i=n/2-2;i<=n/2+2;i++) printf("%c",s[i]);}
	else for (int i=n/2-2;i<=n/2+2;i++) printf("%c",s[i]);
}}

cách 2
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
 
int l,i,j;
char s[20];
gets(s);
l=strlen(s);

 
i=l/2-2;
while(i<=l/2+2) {printf("%c",s[i]); i++;}


  return(0);
}

