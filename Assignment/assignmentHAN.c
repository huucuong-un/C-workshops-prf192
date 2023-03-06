#include <stdio.h>
#include <string.h>
#define MAXN 100

char name[MAXN][MAXN];
double price[MAXN];
int available[MAXN];
int countProduct;
int getUserChoice()
{
    int choice ;
    printf("\n================== ORDERS MANAGEMENT SYSTEM ====================");
	printf("\n| 1. Add a new product to the Store                   Press: 1 |");
	printf("\n| 2. Update price for a particular product            Press: 2 |");
	printf("\n| 3. A list of all available products in the Store    Press: 3 |");
	printf("\n| 4. Sort all products by product price as ascending  Press: 4 |");
	printf("\n| 5. Print information of all products                Press: 5 |");
	printf("\n| 6. Quit                                             Press: 6 |"); 
	printf("\n================================================================\n");
	printf("\nEnter Your Choice: ");
    scanf("%d", &choice);
    
    return choice;
}

void addProduct() {	//hàm thêm product
    fflush(stdin);  //xóa buffer
    printf("Product : ");
    scanf("%[^\n]", &name[countProduct]);
    
    fflush(stdin);
    printf("Price : ");
    scanf("%lf", &price[countProduct]);
    
    printf("Amount : ");
    scanf("%d", &available[countProduct]);
    countProduct++;
    
}

void updatePrice() { //hàm update giá
	char tmp[MAXN];
	double tmpPrice;
	
	fflush(stdin);
	printf("Name of product : ");
	scanf("%[^\n]", &tmp);
	
	printf("New price : ");
	scanf("%lf", &tmpPrice);
	
	int i, pos = -1 ;
	for( i = 0; i < countProduct; i++)
		if(strcmp(name[i], tmp) == 0)
			pos = i;
	if (pos != -1)
	{
		price[pos] = tmpPrice;
		printf("\nPrice updated!\n");
	}
	else 
		printf("\nCan not update price!\n");		
}

void printAll() {	//hàm in tất cả sản phẩm
	int i;
	if(countProduct < 1)
		printf("\nThe system is empty!\n");
	else
		printf("\n--All product now are available--\n");
		for(i = 0; i < countProduct; i++)
			if(available[i] > 0)
				printf("%10s %10.1lf %10d\n", name[i], price[i], available[i]);
}

void swapValue(double *a , double *b) {	//hàm đổi giá trị để dùng trong sort
    double c; 
     c = *a;
    *a = *b;
    *b =  c;
}

void sortAscending() {	//Hàm in giá sản phẩm theo thứ tự
	char tmp[MAXN];
	double tmpPrice = 0;
	int i, j;
    for( i = 0 ; i < countProduct ; i++ )
          for (j = 0 ; j < (countProduct - 1); j++)
            if (price[j+1] < price[j]) {
            	swapValue(&price[j], &price[j + 1]);
            	
            	strcpy(tmp, name[j + 1]);
                strcpy(name[j + 1], name[j]);
                strcpy(name[j], tmp);
                
			}
	printf("\nAll product price were sorted!\n");
}

void printInfo() {	//Hàm in thông tin tất cả sản phẩm
	int i;
	if (countProduct < 1)
		printf("\nThe system is empty!\n");
	else
			printf("\n--Information of all products--\n");
		for (i = 0; i < countProduct; i++) {
			
			printf("\n   Product:    %10s   \n", name[i]);
			printf("     Price:   %10.1lf\n", price[i]);
			printf("    Amount:   %10d   \n", available[i]);
			
		}
		
	
}

int main() {
    int userChoice ;

    do {
        fflush(stdin);
        userChoice = getUserChoice();
        
        
        switch(userChoice) {
        	
            case 1 : addProduct() ; 
						break;
            case 2 : updatePrice();
					    break;
            case 3 : printAll(); 
						break;
          	case 4 : sortAscending(); 
			  			break;
          	case 5 : printInfo(); 
			  			break;
        }
    } while ((userChoice > 0) && (userChoice < 6)) ;
    
    
    return 0;
}
