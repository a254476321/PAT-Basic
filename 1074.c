#include <stdio.h>
#include<string.h>
void rev(char a[], int n)
{
    int m = n >> 1, i;
    n--;
    for(i = 0; i < m; i++)
    {
        a[i] ^= a[n - i];
        a[n - i] ^= a[i];
        a[i] ^= a[n - i];
    }
}
int main()
{
	char a[21], b[22], c[21];
    int x, y, z, i;
    gets(a);
    x = strlen(a);
    memset(b, 48, x + 1);
    memset(c, 48, x);
    gets(b);
    gets(c);
    y = strlen(b);
    b[y] = 48;
    z = strlen(c);
    c[z] = 48;
    rev(a, x);
    rev(b, y);
    rev(c, z);
    for(i = 0; i < x; i++)
    {
        if(a[i] == 48)
        {
            a[i] = 58;
        }
        b[i] += c[i] - 48;
        if(b[i] >= a[i])
        {
            a[i] -= 48;
            b[i] -= 48;
            b[i + 1] += b[i] / a[i];
            b[i] = b[i] % a[i] + 48;
        }
    }
    for(i = x; i >= 0 && b[i] == 48; i--);
    rev(b, i + 1);
    b[i + 1] = 0;
    if(b[0] == 0)
    {
        putchar('0');
    }
    else
    {
        puts(b);
    }
	return 0;
}