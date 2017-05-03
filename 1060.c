#include <stdio.h>
#include<malloc.h>
#include<stdlib.h>
int cmp(const void *a,const void *b)
{
    return *(int*)b-*(int*)a;
}
int main()
{
    int n,*p,i;
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
        scanf("%d",&p[i]);
    qsort(p,n,sizeof(p[0]),cmp);
    for(i=n;i>0;i--)//利用E天骑车超过E英里的最大整数E
        if(p[i-1]>i) break;
    printf("%d",i);
    free(p);
    return 0;
}