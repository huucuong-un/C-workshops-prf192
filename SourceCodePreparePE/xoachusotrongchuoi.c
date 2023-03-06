#include <stdio.h>


int main() {
	char n[50];
	
	scanf("%[^\n]", n);
	//ta phải hỏi từng kí tự coi có là số không
	for (int i = 0; i < strlen(n); i++) //đi hết mảng để hỏi từng kí tự coi có là số hay không
	{
		if (n[i] >= '0' && n[i] <= '9') {	//mày là số nên xứng đáng bị kì thị =) tại vị trí i - là pos 
			
			for ( int j = i; j < strlen(n); j++)
				n[j] = n[j + 1];
				
		    i--;		//để kiểm tra tiếp tục chữ cái tiếp theo bị đẩy lên có là số hay không, là số thì lại xóa và xét tiếp, không thì tăng lên
		}
		
	}
	printf("After removing: ");
	puts(n);
	return 0;
}