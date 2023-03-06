#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX 100
int countLetters(char* s);
int main(int argc, char *argv[]) {
	//=== Do not add new or change statements in the main function.===
	system("cls");
	printf("\nTEST Q4 (3 marks):\n");
	char s[21];
	fflush(stdin);
	printf("Please enter a string: ");
	scanf("%20[^\n]", s);
	//=== The output will be used to mark your program.===============
	printf("\nOUTPUT:\n");
	printf("%d",countLetters(s));
	printf("\n");
	system ("pause");
	return 0;
}
int countLetters(char* s) {
	//Begin your codes here=====================
	int i,count1 = 0,count2=0,count=0;
	for(i=0;i<strlen(s);i++){
		if(s[i]>='a' && s[i]<='z' ){
			count1++;
		}
	}
	for(i=0;i<strlen(s);i++){
		if(s[i]>='A' && s[i]<='Z'){
			count2++;
		}
	}
	count = count1 + count2;
	return count;
	//End your codes============================
}

