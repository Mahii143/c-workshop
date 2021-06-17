#include <stdio.h>
#include <stdlib.h>
void main()
{
    int a;
    scanf("%d",&a);

    for (int i=1; i<=a;i++){
        int b= 1;
        for (int j=1;j<=(a-i);j++){
            printf("* ");
        }
        for (int k=i;k<(i+i);k++){
            printf("%d ",k);
            b=k;
        }
        for (b = b-1; b>=i;b--){
            printf("%d ",b);
        }
        printf("\n");
    }


    return 0;
}
