#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXN 100
#define MAXL 50

int getUserChoice()
{
	int choice;
	printf("\n================== ORDERS MANAGEMENT SYSTEM ====================");
	printf("\n| 1. Add a new product to the Store                   Press: 1 |");
	printf("\n| 2. Update price for a particular product            Press: 2 |");
	printf("\n| 3. A list of all available products in the Store    Press: 3 |");
	printf("\n| 4. Sort all products by product price as ascending  Press: 4 |");
	printf("\n| 5. Print information of all products                Press: 5 |");
	printf("\n| 6. Quit                                             Press: 6 |"); 
	printf("\n================================================================\n");
	printf("\nEnter Your Choice: ");
	do
	{
		choice = checkNumb();
		if (choice == 0)
			printf("Wrong choice! Enter again: ");
	}
	while (choice == 0);
	return choice;
}


int checkNumb()
{
	int num;
	char term;
	scanf("%d%c", &num, &term);
	fflush(stdin);
	if(term != '\n')
    		return 0;
	else
    		return num;
}

int checkChar(char s[])
{
	int length = strlen(s);
	int check, space = 0, enter = 0;
	int i;
	for (i = 0; i <= length; i++)
		if (s[i] == ' ')
			space++;
	if ((length == 1) && (s[length] == '\0'))
		enter = 1;
	if (space == length || enter == 1)
		return check = 0;
	else
		return check = 1;
}

int isEmpty(int n)
{
	return n == 0;
}

char* lTrim(char s[])
{
	int i = 0;
	while (s[i] == ' ')	i++;
	if (i > 0) strcpy(&s[0], &s[i]);
	return s;
}

char* rTrim(char s[])
{
	int i = strlen(s)-1;
	while (s[i] == ' ') i--;
	s[i+1] = '\0';
	return s;
}

char* trim(char s[])
{
	rTrim(lTrim(s));
	char *ptr = strstr(s, "  ");
	while (ptr != NULL)
	{
		strcpy(ptr, ptr+1);
		ptr = strstr(s, "  ");
	}
	return s;
}

char* nameStr (char s[])
{
	trim(s);
	strlwr(s);
	int L = strlen(s);
	int i;
	for (i = 0; i < L; i++)
		if (i == 0 || (i > 0 && s[i-1] == ' '))
			s[i] = toupper(s[i]);
	return s;
}

void printList(char product[][MAXL], int quantity[], double price[], int n)
{
	printf("\n--All products in List--\n");
	int i;
	for (i = 0; i < n; i++)
	{
		printf("\nProduct: %s\n", product[i]);
		printf("Quantity: %d\n", quantity[i]);
		printf("Price of 1 product: %.3lf(VND)\n", price[i]);
	}
}

void addProduct(char products[], char product[][MAXL], int quantity[], int quantities, double price[], double prices,  int *pn) 
{
	strcpy(product[*pn], products);
	quantity[*pn] = quantities;
	price[*pn] = prices;
	(*pn)++;
}


int main()
{
	char product[MAXN][MAXL];
	int quantity[MAXN];
	double price[MAXN];
	int n = 0;
	int total = 0;
	int prices;
	double products[MAXL];
	int quantities;
	int pos;
	int userChoice, outMenu = 0;
	do
   	{
		userChoice = getUserChoice();
        	switch(userChoice)
		{
			case 1:
			{
				int checkCh;
				printf("\nEnter information about the product:\n");
				
				do
				{
					scanf("%[^\n]", products);
					fflush(stdin);
					checkCh = checkChar(products);
					if (checkCh == 0)
						printf("Error! There are no characters to identify! Enter title again: ");
				}
				while (checkCh == 0);
				
				printf("Quantity of the product: ");
				do
				{
					quantities = checkNumb();
					if (quantities == 0)
					printf("Error! Only integer are accepted! Enter quantity again: ");
				}
				while (quantities == 0);
				
				printf("Price of 1 product(VND): ");
				do
				{
					prices = checkNumb();
					if (prices == 0)
					printf("Error! Only integer are accepted! Enter quantity again: ");
				}
				while (prices == 0);
				
				
				
				total += quantities;					
				if (total <= 100)
				{				
					nameStr(products);
					addProduct(products, product, quantity, quantities, price, prices, &n);
					printf("\nAdded!!\n");
				}
				else
				{
					printf("\nFailed! The system is not have enough space!\n");
					total -= quantities;
				}
		    		break;
			}
			
			case 2:
		    		if (isEmpty(n) == 1)
					printf("\nThe system is empty!\n");
				else
					printList(product, quantity, price, n);
				break;
			/*
			case 3:
		    		if (isEmpty(n) == 1)
					printf("\nThe bookcase is empty!\n");
				else
				{
					printf("\nEnter title of the book you wanna search: ");
					scanf("%[^\n]", books);
					fflush(stdin);
					nameStr(books);
					pos = search(books, book, n);
					if (pos < 0 || pos >= n)
						printf("\nThis book is not existed!\n");
					else
					{
						printf("\nFound it!\n");
						printf("Quantity of book %s is: %d\n", book[pos], quantity[pos]);
					}
				}
				break;
			case 4:
				if (isEmpty(n) == 1)
					printf("\nThe bookcase is empty!\n");
				else
				{
					printf("\nEnter title of book you wanna update: ");
					scanf("%[^\n]", books);
					fflush(stdin);
					nameStr(books);
					pos = search(books, book, n);
					if (pos < 0 || pos >= n)
						printf("\nThis book is not existed!\n");
					else
					{
						printf("\nFound it!\n");
						int updateChoice, leave = 0;
						do
						{
							updateChoice = getUpChoice();
							switch (updateChoice)
							{
								case 1:
								{
									int checkCh;
									char bookss[MAXL];
									printf("\nEnter new title for book: ");
									do
									{
										scanf("%[^\n]", bookss);
										fflush(stdin);
										checkCh = checkChar(bookss);
										if (checkCh == 0)
											printf("Error! There are no characters to identify! Enter title again: ");
									}
									while (checkCh == 0);
									nameStr(bookss);
									strcpy(book[pos], bookss);
									printf("\nUpdated success!\n");
									break;
								}
								case 2:
								{
									int cache = quantity[pos];
									total -= quantity[pos];
									int quantitiess;
									printf("\nEnter new quantity for book: ");									
									do
									{
										quantitiess = checkNumb();
										if (quantitiess == 0)
										printf("Error! Only integer are accepted! Enter quantity again: ");
									}
									while (quantitiess == 0);									
									total += quantitiess;									
									if (total <= MAXN)
									{
										quantity[pos] = quantitiess;
										printf("\nUpdated success!\n");
									}
									else
									{
										printf("\nFaild! The bookcase is not have enough space!\n");
										total -= quantitiess;
										total += cache;
									}
									break;
								}
								default:
									if (updateChoice == 3)
										leave = 1;
									else
										printf("Wrong choice! Enter again your choice!\n");
							}
						}
						while (leave == 0);
						printf("\nUpdated!\n");
					}
				}
				break;
			case 5:
				if (isEmpty(n) == 1)
					printf("\nThe bookcase is empty!\n");
				else
				{
					printf("\nEnter title of book you wanna remove: ");
					scanf("%[^\n]", books);
					fflush(stdin);
					nameStr(books);
					pos = search(books, book, n);
					if (pos < 0 || pos >= n)
						printf("\nThis book is not existed!\n");
					else
						removeBook(book, quantity, pos, &n, &total);
				}
				break;
				*/
			default:
		    		if (userChoice == 6)
		    			outMenu = 1;
		    		else 
					printf("\nWrong Choice!");
	    	} 
	}
	while (outMenu == 0);
	printf("\nGood Bye! See you again!\n");
	return 0;
}

