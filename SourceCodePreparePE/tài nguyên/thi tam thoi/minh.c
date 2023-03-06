// fibonanci
{
    int n1 = 0, n2 = 1, n3, i, number;
    printf("Enter the number of elements:");
    scanf("%d", &number);
    printf("\n%d %d", n1, n2);   // printing 0 and 1
    for (i = 2; i < number; ++i) // loop starts from 2 because 0 and 1 are already printed
    {
        n3 = n1 + n2;
        printf(" %d", n3);
        n1 = n2;
        n2 = n3;
    }
    return 0;
}

// prime number
{
    int n, i, m = 0, flag = 0;
    printf("Enter the number to check prime:");
    scanf("%d", &n);
    m = n / 2;
    for (i = 2; i <= m; i++)
    {
        if (n % i == 0)
        {
            printf("Number is not prime");
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        printf("Number is prime");
    return 0;
}

// sum of digits
{
    int n, sum = 0, m;
    printf("Enter a number:");
    scanf("%d", &n);
    while (n > 0)
    {
        m = n % 10;
        sum = sum + m;
        n = n / 10;
    }
    printf("Sum is=%d", sum);
    return 0;
}

// reverse number
{
    int n, reverse = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n != 0)
    {
        rem = n % 10;
        reverse = reverse * 10 + rem;
        n /= 10;
    }
    printf("Reversed Number: %d", reverse);
    return 0;
}

// decimal to binary
{
    int a[10], n, i;
    system("cls");
    printf("Enter the number to convert: ");
    scanf("%d", &n);
    for (i = 0; n > 0; i++)
    {
        a[i] = n % 2;
        n = n / 2;
    }
    printf("\nBinary of Given Number is=");
    for (i = i - 1; i >= 0; i--)
    {
        printf("%d", a[i]);
    }
    return 0;
}

// Alphabet Triangle
{
    int ch = 65;
    int i, j, k, m;
    system("cls");
    for (i = 1; i <= 5; i++)
    {
        for (j = 5; j >= i; j--)
            printf(" ");
        for (k = 1; k <= i; k++)
            printf("%c", ch++);
        ch--;
        for (m = 1; m < i; m++)
            printf("%c", --ch);
        printf("\n");
        ch = 65;
    }
    return 0;
}

/*
C strlen()
C strcpy()
C strcat()
*/


