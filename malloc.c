#include<stdio.h>
#include<stdlib.h>

void main()
{
    int *p;
    p = (int *)malloc(sizeof(int));
    *p = 25;
    printf("%d", *p);
    free(p);
}