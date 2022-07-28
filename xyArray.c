#include<stdio.h>
void main()
{
    int a, b;
    printf("Enter --X-- array you want:\n");
    scanf("%d%d", &a, &b);
    int arr[a][b];
    
    for(int i = 0; i<a; i++)
    {
        for(int j = 0; j<b; j++)
        {
            printf("enter arr[%d][%d] array:\n", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Printing the element::::::::::::\n");
    for(int i = 0; i<a; i++)
    {
        printf("\n");
        for(int j = 0; j<b; j++)
        {
            printf("%d", arr[i][j]);
        }
        
    }
}