#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int isPrime(int n){
	int i,m;
	if(n<2) return 0;
	m=sqrt(n);;
	for(i=2;i<=m;i++){
		if(n%i==0) return 0;
	}
	return 1;
}

int main()
{
  system("cls");
  printf("\nTEST Q2 (3 marks):\n");
  int n,sum,i;
  printf("Enter n = "); scanf("%d",&n); 
  //============================================================
  // Write your statements here
  //......
  for(i=2;i<=n;i++){
  	if(isPrime(i)==1){
  		sum+=i;
	  }
  }
  //End your statements
  
  
  //====DO NOT ADD NEW OR CHANGE STATEMENTS AFTER THIS LINE====
  //==THE OUTPUT AFTER THIS LINE WILL BE USED TO MARK YOUR PROGRAM==
  printf("\nOUTPUT:\n");
  printf("%d",sum); 
  printf("\n");
  system ("pause");
  return(0);
}
