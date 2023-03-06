#include <stdio.h>

int main(){
	char ch;
	int V=0, C=0, O=0;
		printf("Text: \n");
	do{
		ch= getchar();
		ch= toupper(ch);
		if(ch>='A' && ch<='Z'){
			switch(ch){
				case 'A' :
				case 'E' :
				case 'I' :
				case 'O' :
				case 'U' : 
				V++; 
				break;
			default: C++;
			}
		}
		else if (ch!=10) O++;
	}
	while(ch!='\n');
		printf("Vowles = %d\n", V);
		printf("Consonants = %d\n", C);
		printf("Others = %d\n", O);
	return 0; 
}
