#include<stdio.h>

int main()
{
    short n, m, i, n1 = 0, x;
    int n2 = 0;
    _Bool a[10000] = {0}, flag;
    char s[5];
    scanf("%hd%hd", &n, &m);
    while(m--)
    {
        scanf("%hd", &i);
        a[i] = 1;
    }
    while(n--)
    {
        scanf("%s%hd", s, &i);
        flag = 0;
        while(i--)
        {
            scanf("%hd", &x);
            if(a[x] == 1)
            {
                printf("%s: %04hd", s, x);
                n1++;
                n2++;
                flag = 1;
                break;
            }
        }
        while(i-->0)
        {
            scanf("%hd", &x);
            if(a[x] == 1)
            {
                printf(" %04hd", x);
                n2++;
            }
        }
        if(flag)
        {
            putchar('\n');
        }
    }
    printf("%hd %d", n1, n2);
	return 0;
}