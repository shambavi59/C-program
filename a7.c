//transpose of 2d matrix
#include<stdio.h>
int main()
{
int i, j, a[50][50], n, m;
printf("row size and column size:  ");
scanf("%d%d",&n,&m);
printf("array elements are: \n");
for(i=0; i<n; i++)
{
    for(j=0; j<m; j++)
    {
        scanf("%d", &a[i][j]);
    }
}
printf("original array is: \n");
for(i=0; i<n; i++)
{
    for(j=0; j<m; j++)
    {
        printf("%d", a[i][j]);
    }
    printf("\n");
}
printf("transposed matrix is: \n");
for(i=0; i<m; i++)
{
    for(j=0; j<n; j++)
    {
        printf("%d", a[j][i]);
    }
    printf("\n");
}


}