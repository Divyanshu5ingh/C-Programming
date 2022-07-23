#include<stdio.h>
int even_odd(int);

void main()
{   
    int n, flag = 0;
    printf("Enter number to check even or odd\n");
    scanf("%d", &n);

    flag = even_odd(n);

    if (flag == 0)
    {
        printf("Number is odd\n");
    } else printf("Number is even\n");
}
int even_odd(int n)
{
    if (n%2 == 0)
    {
        return 1;
    } else return 0;
}