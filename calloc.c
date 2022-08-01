#include<stdio.h>
#include<stdlib.h>
void main()
{
    int i, n;
    int *fp;
    
    printf("Enter how many numbers\n");
    scanf("%d", &n);
    
    fp = (int *)calloc(n, sizeof(int));
    for(i = 0; i<n; i++)
    {
        scanf("%d", fp);
        fp++;
    }
    free(fp);
}
