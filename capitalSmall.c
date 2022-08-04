
#include <stdio.h>

int main()
{
    
    char arr[10];
    scanf("%s", arr);
    int count = 0;
    
    for ( int i = 0; i<sizeof(arr); i++)
    {
        if (arr[i] >='A' && arr[i]<='Z'){
            count++;
        }
    }
    printf("no of capital no is %d",count);
    return 0;
}
