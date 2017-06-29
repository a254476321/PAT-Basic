#include<stdio.h>
#include<stdlib.h>
int cmp(const void *a,const void *b)
{
    return *(int*)a-*(int*)b;
}
int main()
{
    int n,i,sum;
    scanf("%d",&n);
    int p[n];
    for(i=0;i<n;i++)
        scanf("%d",&p[i]);
    qsort(p,n,sizeof(p[0]),cmp);
    sum=p[0];
    for(i=1;i<n;i++)
    {
        sum=(sum+p[i])>>1;
    }
    printf("%d",sum);
    return 0;
}