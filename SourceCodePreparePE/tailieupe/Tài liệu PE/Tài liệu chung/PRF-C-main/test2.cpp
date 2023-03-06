#include <stdio.h>
#include <string.h>

int main(){ 
int n,s=0,j;
char a[100];

scanf("%d",&n);
for (int i=0;i<n;i++)
//scanf("%*c");
{ scanf("%*c");scanf("%s",a );
  //gets(a);
	if (strcmp(a,"one")==0) j=1;
	else if (strcmp(a,"two")==0) j=2;
	else if (strcmp(a,"three")==0) j=3;
	else if (strcmp(a,"four")==0) j=4;
	else if (strcmp(a,"five")==0) j=5;
	else if (strcmp(a,"six")==0) j=6;
	else if (strcmp(a,"seven")==0) j=7;
	else if (strcmp(a,"eight")==0) j=8;
	else if (strcmp(a,"nine")==0) j=9;
		s=s+j;
								
}
printf("%d",s);
return 0;
}


 
