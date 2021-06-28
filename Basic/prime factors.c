/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    
    for (int i=2;i<a/2;i++)
    {
        if (a%i==0)
        {
            int flag =1;
            for (int j=2;j<i;j++)
            {
                if (i%j==0) 
                {
                    flag=0;
                    break;
                }
                else flag=1;
            }
            if (flag ==1)
            {
                printf("%d ",i);
            }
        }
    }    
    
    return 0;
}
