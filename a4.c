#include<stdio.h>
int main()
{
    int i, a[50], b[50], sum[50], n;
    printf("enter no of elements to be printed: ");
    scanf("%d", &n);
             printf("elements of array 1: ");
            for(i=0; i<n; i++)
            scanf("%d", &a[i]);
             printf("elements of array 2: ");
            for(i=0; i<n; i++)
            scanf("%d", &b[i]);
        for(i=0; i<n; i++)
        {
        sum[i]=a[i]+b[i];
        printf("sum of index %d is %d \n", i, sum[i]);
}
}