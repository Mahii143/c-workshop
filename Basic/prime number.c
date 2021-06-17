#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a,i = 3,count,j;
    scanf("%d",&a);
    printf("2 ");
    for (count=2; count<=a; i++)
    {
        for (j=2; j < i; j++)
        {
            if (i%j==0) break;
        }
        if (j==i)
        {
            printf("%d ",i);
            count++;
        }
    }
}
