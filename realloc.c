#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *fp;
    fp = (int *)malloc(sizeof(int));
    *fp = (int *)realloc(fp, 2*sizeof(int));
    printf("%d", *fp);
    free(fp);
}
