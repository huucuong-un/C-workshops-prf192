#include <stdio.h>
#include <math.h>
#include <stdlib.h> 
#include <string.h>//strlen/cmp/cat/cpy/cmpi 
#include <ctype.h>//tolower/upper,islower/upper/digit
#include <time.h>


void Split(char s[], char st[][30], int & n) {
	int i, j, len;
	len = strlen(s);
	n = 0;
	i = 0;
	while(i < len) {
		//tim i la vi tri dau tien trong s, sao cho s[i] # empty
		while(i < len && s[i] == ' ') i++;
		if(i < len) {
		char x[30];
		//sao chep moi ky tu s[i] vao x, cho den khi s[i] = empty
		j = 0;
		while(i < len && s[i] != ' ') {
		x[j] = s[i]; i++; j++;
		}
	x[j] = '\0';
	strcpy(st[n],x);
	n++;  }
	i++;}
}
int main() {
char st[10][30];
int n, i,l;
char s[100] = "You can create new function Hoang xuan Son";
Split(s,st,n);

int vt=0;
for(vt=0; vt<n; vt=vt+1)
{
l=strlen(st[vt]);
for(i=0; i<l; i++)
{
if(st[vt][i]>='a') st[vt][i]-=32; 
}
}
 
for(i=0; i<n; i++) printf("%s ",st[i]);
}
