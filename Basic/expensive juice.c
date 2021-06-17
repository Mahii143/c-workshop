#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int o,a;char c;
    scanf("%d %d\n%c",&o,&a,&c);
    c= toupper(c);

    switch (c)
    {
        case 'O':
            if (o>a)
                printf("YES");
            else printf("NO");
            break;
        case 'A':
            if (a>o)
                printf("YES");
            else printf("NO");
            break;
    }
    return 0;
}
