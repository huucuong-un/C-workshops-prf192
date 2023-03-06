#include <stdio.h>

int main(){
	int a = 0;
	char ch;
	for(a = 0 ; a < 256 ; a++ )
		printf("%c : %d, %o, %X\n", a, a , a, a);
	if(a!=0 && a%20==0){ /* code page of 20 line */
		getchar();
	}
	return 0;
}
