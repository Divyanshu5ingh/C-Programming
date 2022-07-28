#include<stdio.h>
int num(int n);
void main()
{
    int number, result;
    printf("Enter the number you want to ::\n");
    scanf("%d", &number);
    
   result = num(number);

   printf("The factorial is : %d\n", result);

}

int num(int n)
{
    if (n!=0)
    
    return n + num(n-1);
     else 
    return n; 
}