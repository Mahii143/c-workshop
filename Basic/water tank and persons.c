#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int n,x,k;
    scanf("%d %d %d",&n,&x,&k);
    int full_water,partial_water,no_water=0,remain_water;
    full_water=partial_water=no_water=0;


    while (n>-0)
    {
        if (k<=x)
        {
            full_water++;
            x-=k;
        }
        else if (x!=0)
        {
            partial_water++;
            x=0;
        }
        else no_water++;
        n--;
    }
    printf("%d\n",full_water);
    printf("%d\n",partial_water);
    printf("%d",no_water);

    return 0;
}
