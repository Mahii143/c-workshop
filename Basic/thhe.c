#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n, i , j, c=1;
    scanf("%d",&n);
    //printf(" ");
    for (i=0;i<n;i++)
        {
            for (j=0;j<=i;j++)
            {
                if (j==0||i==0)
                {
                    c=1;
                    printf("%d ",c);
                }
                else
                {
                    c=c*(i-j+1)/j;
                    printf("%d ",c);
                }
            }
            printf("\n");
        }



    return 0;
}
