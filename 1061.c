#include<stdio.h>
#include<malloc.h>
int main()
{
    int m,n,*p,i,j,sum,x;
    _Bool *p2;
    scanf("%d%d",&m,&n);
    p=(int*)malloc(n*sizeof(int));
    p2=(_Bool*)malloc(n*sizeof(_Bool));
    for(i=0;i<n;i++)
        scanf("%d",&p[i]);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        p2[i]=x;
    }
        
    for(i=0;i<m;i++)
    {
        sum=0;
        for(j=0;j<n;j++)
        {
            scanf("%d",&x);
            if(x==p2[j]) sum+=p[j];
        }
        printf("%d\n",sum);
        sum=0;
    }
    free(p);
    free(p2);
    return 0;
}