#include <stdio.h>

int reverse_num(int n){ 
  int reverse = 0; 
  while (n > 0) {
    reverse = reverse * 10 + n % 10;
    n /= 10;
  }
  return reverse;
}

int main(void){
    int n;
 
    printf("Input positive integer: ");
    scanf("%d", &n);

    int result = reverse_num(n);
    printf("Reverse number: %d\n", result );

    return 0;
}
