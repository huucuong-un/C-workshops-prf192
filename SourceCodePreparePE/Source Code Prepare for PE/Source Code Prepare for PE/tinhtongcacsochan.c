#include<stdio.h>
#include<math.h>
int main()
{
  //khai báo biến
  long temp, n;
  int S = 0;
  //sử dụng dowhile để yêu cầu người dùng nhập vào só lớn hơn 0
  //nếu n < 0 thì yêu cầu nhập lại
  do
  {
    printf("\nNhập vào số nguyên n lớn hơn 0: ");
    scanf("%ld", &n);
    if(n <= 0)
    {
      printf("\n Số n phải lớn hơn 0, vui lòng nhập lại !");
    }
  }while(n <= 0);
  //gán biến n cho temp, ta sẽ sử dụng temp để đếm các chữ số
  temp = n;
  while(temp != 0)
  {
    if(temp % 2 == 0)
    {
     S = S + temp % 10;
    }
    temp = temp / 10;
  }
  printf("\nTổng các chữ số chẵn của %ld là: %d",n,S);
 
  printf("\n--------------------------------------\n");
  printf("Chương trình này được đăng tại Freetuts.net");
}