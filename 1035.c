#include <stdio.h>
#include<stdlib.h>
int cmp(const void *a,const void *b)
{
    return *(int*)a-*(int*)b;
}
int main()
{
    int n,a[100],b[100],i,j;
    scanf("%d\n",&n);
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    for(i=0; i<n; i++)
        scanf("%d",&b[i]);
    for (i=0; i<n-1&&b[i]<=b[i+1]; i++);
    for (j=i+1; a[j]==b[j]&&j<n; j++);
    if(n==j)
    {
        printf("Insertion Sort\n");
        qsort(a,i+2,sizeof(a[0]),cmp);
    }
    else
    {
        printf("Merge Sort\n");
        i++;
        int x=i;
        j=i;
        for(i=1; i+j<n; i++)//找出最小排序段
        {
            if(b[i+j-1]>b[i+j])
            {
                if(i+j==n-1) break;
                if(i<x) x=i;
                j+=i;
                i=0;
            }
        }
        x*=2;
        if(x>n) x=n;
        for(i=0; x+i<=n; i+=x)
            qsort(a+i,x,sizeof(a[0]),cmp);
        if(i!=n) qsort(a+i,n-i,sizeof(a[0]),cmp);
    }
    for(i=0; i<n-1; i++)
        printf("%d ",a[i]);
    printf("%d\n",a[i]);
    return 0;
}