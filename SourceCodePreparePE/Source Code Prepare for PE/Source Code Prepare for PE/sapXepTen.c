#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	char s[5][20], t[20]; // Khai bao mang chua 5 ten can nhap
	int i, j;
	for(i = 0; i < 5; i++)
    	scanf("%s", s[i]); // Nhap 5 ten

	for(i = 1; i < 5; i++) 
	{
		for (j = 1; j < 5; j++) 
		{
        	if (strcmp(s[j - 1], s[j]) > 0) // So sanh cac ten voi nhau
			{
    		strcpy(t, s[j - 1]);
    		strcpy(s[j - 1], s[j]);
        	strcpy(s[j], t);
        	}
    	}
    }
  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	for(i = 0; i < 5; i++)
    	printf("%s ", s[i]); // In ra cac ten da duoc sap xep







  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
