#include<stdio.h>
void main()
{
    int a, b, temp;
   printf("Enter the value to swap\n");
   scanf("%d %d", &a, &b);

    printf("Before swapping a = %d and b = %d\n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("After swapping the value a = %d and b = %d\n", a, b);
}