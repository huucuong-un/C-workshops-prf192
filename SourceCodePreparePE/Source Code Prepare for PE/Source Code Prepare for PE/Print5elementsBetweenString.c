#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	char s[25]; // Khai bao chuoi
	scanf("%s",s); // Nhap vao chuoi
	int dem = strlen(s); // Tao mot bien dem bang do dai chuoi
	int i = (dem - 5) / 2; 
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	int j;
	for(j=i; j<i+5; j++)
		printf("%c",s[j]); // In ra 5 phan tu o giua cua chuoi





  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
