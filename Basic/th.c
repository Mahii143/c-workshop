#include<stdio.h>


int main()
{
    int a,b,c,d;
    scanf("%d",&a);
    for(b=1;b<=a;b++)
    {
            for(c=1;c<=a-b;c++)
            printf("  ");
    for(d=1;d<=b;d++)
    {
        if(d==1||d==b||c==a||b==a)
        printf("* ");
        else printf("  ");
    }
    printf("\n");
    }
}
