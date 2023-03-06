#include <stdio.h>
#include <string.h>



int main(){
    int count;
    char s[100];
    gets(s);
    for(int j='a';j<='z';j++){
	for (int i=0;i<strlen(s);i++)
     if (j==s[i]) count++;
     if (count!=0)
	 {	printf("%c_", j);
     	printf("%d ",count);}
     count=0;
	}}

