#include <stdio.h>
#include<malloc.h>
#include<stdlib.h>
typedef struct team
{
    int id,score;
} TEAM;
int cmp(const void *a,const void *b)
{
    return ((TEAM*)a)->id-((TEAM*)b)->id;
}
int main()
{
    int n,i,id=0,max=-1,sum=0,mid=0;
    TEAM *t;
    scanf("%d",&n);
    t=(TEAM*)malloc(n*sizeof(TEAM));
    for(i=0; i<n; i++)
        scanf("%d-%*[0-9]%d",&t[i].id,&t[i].score);
    qsort(t,n,sizeof(t[0]),cmp);
    for(i=0; i<n; i++)
    {
        if(t[i].id==id) sum+=t[i].score;//id一样的分数相加
        else
        {
            if(sum>max)
            {
                mid=id;
                max=sum;
            }
            sum=t[i].score;
            id=t[i].id;
        }
    }
    if(sum>max)
    {
        mid=id;
        max=sum;
    }
    printf("%d %d\n",mid,max);
    return 0;
}