#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	char s1[50];
	scanf("%[^\n]\n", s1);
	

  	char s2[50];
	scanf("%[^\n]\n", s2);
  	
  	
	char s3[50];
 	scanf("%[^\n]", s3);
 
 	
 	int t;
	printf("%s\n", s1);
	printf("%s\n", s2);
	printf("%s", s3);
 	
 
	//printf("%s", s1[0]);
  
  	for (int i = 0; i < strlen(s1); i++)
  		printf("%c", )
  	
  	
  	
	for (int i = 0; i < strlen(s1); i++) {
		if (strcmp(s1[i], s2[50]) == 0) {
			strcpy(t, s1[i]);
			strcpy(s1[i], s3[50]);
			strcpy(s3[50], t);
		}
	}
	printf("%s", s1);
  	
  	
  	
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:








  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
