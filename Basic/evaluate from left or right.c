#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int add(int x,int y)
{
    return (x+y);
}
int sub(int x,int y)
{
    return (x-y);
}
int multi(int x,int y)
{
    return (x*y);
}
int divi(int x,int y)
{
    return (x/y);
}
int switching(int x, int y,char z)
{
    switch(z)
    {
        case '+':
            return add(x,y);
            break;
        case '-':
            return sub(x,y);
            break;
        case '*':
            return multi(x,y);
            break;
        case '/':
            return divi(x,y);
            break;
    }
}

//L = (((8+9)-10)*5)
//R = (8+(9-(10*5)))

int main()
{
    int a,b,c,d,ans1,ans2,ans3;char m,c1,c2,c3;
    scanf("%d%c%d%c%d%c%d\n",&a,&c1,&b,&c2,&c,&c3,&d);
    scanf("%c",&m);
    m = toupper(m);

    switch(m)
    {
        case 'L':
            ans1 = switching(a,b,c1);
            ans2 = switching(ans1,c,c2);
            ans3 = switching(ans2,d,c3);
            printf("%d",ans3);
            break;
        case 'R':
            ans1 = switching(d,c,c3);
            ans2 = switching(b,ans1,c2);
            ans3 = switching(a,ans2,c1);
            printf("%d",ans3);
            break;

    }

    return 0;
}

