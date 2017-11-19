#include <stdio.h>
#include<stdlib.h>
int cmp(const void *a, const void *b)
{
    return *(int*)a - *(int*)b;
}
int main()
{
    int p, n, N = 0, *start, *end;
    scanf("%d%d", &n, &p);
    int s[n];
    end = s + n;
    for(start = s; start < end; start++)
    {
        scanf("%d", start);
    }
    qsort(s, n, sizeof(s[0]), cmp);
    for(start = s; start + N < end; start++)
    {
        for(; start + N < end && (float)start[N] / p <= *start; N++);
    }
    printf("%d\n", N);
    return 0;
}