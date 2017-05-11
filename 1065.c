#include <stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct single{
    int id,state;
} Single;
int cmp(const void *a,const void *b)
{
    return ((Single*)a)->id-((Single*)b)->id;
}
int main()
{
    int n,n2,N,i,a,b,p[100000]={0};
    Single *p2,*p3;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d",&a,&b);
        p[a]=b;
        p[b]=a;
    }
    scanf("%d",&n2);
    N=n2;
    p2=(Single*)malloc(n2*sizeof(Single));
    for(i=0;i<n2;i++){
        scanf("%d",&p2[i].id);
        p2[i].state=1;//默认都是单身
    }
    qsort(p2,n2,sizeof(p2[0]),cmp);
    for(i=0;i<n2;i++)
    {
        if(p2[i].state==0) continue;
        a=p[p2[i].id];//获取对象id
        p3=bsearch(&a,p2+i+1,n2-i-1,sizeof(p2[0]),cmp);
        if(p3!=NULL){
            p2[i].state=0;
            p3->state=0;//改变state为非单身
            N-=2;
        }
    }
    a=1;
    printf("%d\n",N);
    for(i=0;i<n2;i++){
        if(p2[i].state==1){//输出单身的id
            if(a!=1) printf(" ");
            else a=0;
            printf("%05d",p2[i].id);
        }
    }
    free(p2);
    return 0;
}