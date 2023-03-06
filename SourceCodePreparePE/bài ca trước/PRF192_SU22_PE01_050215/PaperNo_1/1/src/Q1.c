#include <stdio.h>
#include <stdlib.h>

void swap(int* a, int* b);
int main(int argc, char *argv[]) {
	//=== Do not add new or change statements in the main function.===
	system("cls");
	printf("\nTEST Q1 (2 marks):\n");
	int n, m;
	printf("Please enter two positive integer n and m: ");
	scanf("%d%d", &n,&m);

	//=== The output will be used to mark your program.===============
	printf("\nOUTPUT:\n");
	swap(&n,&m);
	printf("%-5d%-5d", n,m);
	printf("\n");
	system ("pause");
	return 0;
}
//-----------------------------------------------
void swap(int* a, int* b){
	//Begin your codes here=====================
	int t ;
	t=*a;
	*a=*b;
	*b=t;
	//End your codes============================
}

