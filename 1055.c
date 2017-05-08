#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct people{
    char n[9];
    int h;
} People;
int cmp(const void *a,const void *b)
{
    People *x=(People*)a,*y=(People*)b;
    if(x->h!=y->h) return y->h-x->h;
    else return strcmp(x->n,y->n);
}
void array(People *p,int n)
{
    int x;
    if(n==0) return;
    else if(n%2) x=n-2;//x为最大的奇数下标
    else x=n-1;
    while(x>0)//3,1,0,2（n=4）
    {
        printf("%s ",p[x].n);
        x-=2;
    }
    printf("%s",p[0].n);
    x=2;
    while(x<n)
    {
        printf(" %s",p[x].n);
        x+=2;
    }
    printf("\n");
}
int main()
{
    People *p,*p2;
    int n,m,i,j;
    scanf("%d%d",&n,&m);
    p=(People*)malloc(n*sizeof(People));
    for(i=0;i<n;i++)
        scanf("%s%d",p[i].n,&p[i].h);
    qsort(p,n,sizeof(p[0]),cmp);//排序方便取出数据
    j=n/m;
    i=n%m+j;
    array(p,i);
    p2=p+i;
    for(i=1;i<m;i++)
    {
        array(p2,j);
        p2+=j;
    }
    free(p);
    return 0;
}