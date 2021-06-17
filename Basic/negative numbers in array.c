#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,j,ch=0,c=0;
    scanf("%d\n",&n);
    int a[n],b[n];

    for(i=0;i<n;i++)
    {
        scanf("%d ",&a[i]);
        if(a[i]<0)
        {
            b[c] = a[i];
            ch++;
            c++;
        }
    }
    if(ch==0) printf("-1");
    else
    {
        for(i=0;i<ch;i++)
        {
            int t;
            for(j=i+1;j<ch;j++)
            {
                if(b[i]<b[j])
                {
                    t= b[i];
                    b[i]=b[j];
                    b[j]=t;
                }
            }
        }
        for (int i=0;i<ch;i++)
        {
            printf("%d ",b[i]);
        }
    }
    return 0;

}
