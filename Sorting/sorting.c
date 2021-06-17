#include <stdio.h>
#include <stdlib.h>



int main()
{
    int arr[5] = {5,6,0,1,7};
    int n=5;

    for (int i=0;i<n;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            if (arr[i]>arr[j])
            {
                int t = arr[i];
                arr[i] =  arr[j];
                arr[j] = t;
            }
        }
    }
    for (int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}