//Nhap 1 chuoi va tra ve so chu cai, chu so, va ki tu dac biet xuat hien trong chuoi
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  	char str[100];
  	scanf("%[^\n]", str);//Nhap chuoi
  	int i = 0;
  	int al = 0, digit = 0, special = 0;// Goi tao bien al tra ve so chu, digit cha ve so chu so, special tra ve so ki tu dac biet.
  	
  	for(i = 0; i < strlen(str); i++)// Vong dem dem so chu cai, chu so va ki tu dac biet.
  	{
  		if(isalpha(str[i]))
			al++;
		else if(isdigit(str[i]))
			digit++;
		else
			special++;	 	
	}
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  	printf("%d\n%d\n%d", al, digit, special);




  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
