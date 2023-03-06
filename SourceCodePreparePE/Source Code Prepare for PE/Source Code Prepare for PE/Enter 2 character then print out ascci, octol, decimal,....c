#include <stdio.h>

int main(){
	char x, y;
	int d;
	char t, c;
		printf("Enter 2 character: ");
		scanf("%c %c", &x, &y);
	if(x > y){
		int t = x;
			x = y;
			y = t;
	}
		d = y - x;
		printf("d: %d\n", d);
	for(c = x;c <= y;c++){
		printf("%c : %d, %o, %X\n", c, c, c, c);
	}
	return 0;
}
