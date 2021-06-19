/*********************

Binary Search:

*Input array size, array, key to find
*Initialize first and last index
*First index does n't exceed last index
*Find mid value of the first and last index
*If element in mid value of the array is equals to key return the mid value
*If element in mid value of the array is greater than key than first index assigns to mid+1
*If element in mid value of the array is less than key last index assigns to mid-1
*Call the function
*Display the values

*********************/



#include<stdio.h>

int BinarySearch(int *p,int a, int key)
{
    int l = 0, h = a-1;

    int count = 0;

    while (l<=h)
    {
        count++;
        int mid = (l+h)/2;
        if (key==*(p+mid))
        {
            printf("Number of Searches: %d\n",count);
            return mid;
            break;
        }
        else if (key> *(p+mid))
        {
            l=mid+1;
        }
        else if (key< *(p+mid))
        {
            h = mid-1;
        }
    }
}

int main() {
    int a;scanf("%d",&a);
    int p[a];for(int i=0;i<a;i++){scanf("%d",&p[i]);}
    int key;scanf("%d",&key);

    int h = BinarySearch(p,a,key);
    printf("Position of the key: %d ",h);

    return 0;
}
