#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:

  int a;
  scanf("%d", &a);
  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	do {
		for (int i = 0; i < a; i++ ) {
			printf("\n");
			for (int j = 0; j < a; j++)
				printf("*");
		}
		
  		
  } while ( 0 > a || a > 20);
  







  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
