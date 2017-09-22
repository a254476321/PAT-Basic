#include<iostream>
#include<set>
#include<algorithm>
using namespace std;
int m, *value;
bool cmp(int a, int b)
{
    return (value[a] < 0 && value[b] >= 0) || (value[a] <= m && value[b] > m);
}
int main()
{
    int head, n, i, x, next[100000], val[100000];
    value = val;
    scanf("%d%d%d", &head, &n, &m);
    int que[n];
    while(n--)
    {
        scanf("%d", &x);
        scanf("%d%d", val + x, next + x);
    }
    i = 0;
    while(head != -1)
    {
        que[i++] = head;
        head = next[head];
    }
    stable_sort(que, que + i, cmp);
    n = i - 1;
    for(i = 0; i < n; i++)
    {
        printf("%05d %d %05d\n", que[i], val[que[i]], que[i + 1]);
    }
    printf("%05d %d -1", que[i], val[que[i]]);
	return 0;
}