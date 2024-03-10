#include<stdio.h>
int main()
{
    int i, marks[50], sum, avg;
    printf("enter marks of 5 students");
    for(i=0; i<5; i++)
    scanf("%d", &marks[i]);
    for(i=0; i<5; i++)
    sum =sum+marks[i];
    printf("sum is %d\n", sum);
    avg=sum/2;
    printf("average is %d", avg);
}