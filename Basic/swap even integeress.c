#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;scanf("%d",&a);
    int arr[a];for (int i=0;i<a;i++){scanf("%d",&arr[i]);}

    int eve_count=0;
    for (int i=0;i<a;i++)
    {
        if (arr[i]%2==0) eve_count++;
    }
    int pos[eve_count],j=0;
    for (int i=0;i<a;i++)
    {
        if (arr[i]%2==0)
        {
            pos[j]= i;
            j++;
        }
    }

    /************
    7
    1 2 3 4 5 6 8
    1 3 5 6
    ************/

    int pos_mid = eve_count/2;
    int chr=eve_count-1;
    for (int i=0;i<pos_mid;i++)
    {
        int first_pos = pos[i];
        int last_pos = pos[chr];

        int t = arr[first_pos];
        arr[first_pos] = arr[last_pos];
        arr[last_pos] = t;
        chr--;
    }

    /***Finding the even pos******
    for (int i=0;i<eve_count;i++)
    {
        printf("%d ",pos[i]);
    }
    ******************************/
    //printf("\n");
    for (int i=0;i<a;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}
