#include<stdio.h>
#include<stdlib.h>


void BubbleSort(int arr[], int n)
{
    int t, i, j, flag;

    for (int i=0;i<n;i<n)
    {
        flag = 0;
        for (int j=0;j<n-i-1;j++)//last element is neglected because its sorted first
        {
            if (arr[j]>arr[j+1])
            {
                t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
                //if swap happens update flag to 1
                flag = 1;
            }
        }
        //if no swap happened in any pass then break the loop
        if (flag==0)break;
    }
    for (int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

}
int main()
{
    int n= 6;
    int arr[6] = {5, 1, 4, 8, 2, 3};

    BubbleSort(arr,n);
    return 0;
}
