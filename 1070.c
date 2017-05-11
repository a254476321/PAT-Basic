#include<stdio.h>
#include<stdlib.h>
int cmp(const void *a,const void *b)
{
    return *(int*)b-*(int*)a;
}
int main()
{
    int n,*p,i;
    double sum;
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
        scanf("%d",&p[i]);
    qsort(p,n,sizeof(p[0]),cmp);
    sum=p[n-1];
    while(--n)
    {
        sum+=p[n-1];
        sum/=2;
    }
    printf("%d",(int)sum);
    return 0;
}