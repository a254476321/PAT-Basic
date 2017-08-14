#include <stdio.h>
#include<string.h>
int main()
{
    int n, i, b, x;
    char a[1001];
    scanf("%s%d", a, &b);
    n = strlen(a);
    if(n > 1)
    {
        x = (a[0] - '0') * 10 + a[1] - '0';
    }
    else
    {
        x = a[0] - '0';
    }
    printf("%d", x / b);
    x %= b;
    for(i=2; i<n; i++)
    {
        x = x * 10 + a[i] - '0';
        printf("%d", x/b);
        x %= b;
    }
    printf(" %d", x);
    return 0;
}