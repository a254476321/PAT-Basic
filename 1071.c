#include<stdio.h>
#include<string.h>

int main()
{
    int T, t;
    short k, n1, n2, b;
    scanf("%d%hd", &T, &k);
    while(k--)
    {
        scanf("%hd%hd%d%hd", &n1, &b, &t, &n2);
        if(t > T)
        {
            printf("Not enough tokens.  Total = %d.", T);
        }
        else
        {
            if((n2 > n1) == b)
            {
                T += t;
                printf("Win %d!  Total = %d.", t, T);
            }
            else
            {
                T -= t;
                printf("Lose %d.  Total = %d.", t, T);
                if(T == 0)
                {
                    puts("\nGame Over.");
                    break;
                }
            }
        }
        putchar('\n');
    }
	return 0;
}