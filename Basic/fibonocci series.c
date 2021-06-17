#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a,n1=0,n2=1,term=0,count;
    scanf("%d",&a);
    for (count=1;count<=a;count++)
    {
        printf("%d ",term);
        n1 = n2;
        n2 = term;
        term = n1+n2;
    }
}
