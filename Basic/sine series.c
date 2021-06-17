#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int fact(int x)
{
    int ans=1;
    for (int i=1; i<=x; i++){
        ans *= i;
    }
    return ans;
}

int main()
{
    int a,factorial;
    scanf("%d",&a);
    factorial = fact(a);
    printf("%d",factorial);
    int term = pow(a,3);
    printf("\n%d",term);
}
