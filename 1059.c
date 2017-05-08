#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
//大体上就是判断质数，排序后二分查找
_Bool isPrime(int a)
{
    int max=sqrt(a),i;
    for(i=3; i<=max; i+=2)
    {
        if(a%i==0) return 0;
    }
    return 1;
}
typedef struct people
{
    short id,placing,state;
} People;
int cmp(const void *a,const void *b)
{
    return ((People*)a)->id-((People*)b)->id;
}
int main()
{
    People *p,*p2;
    int n,n2,i,x;
    scanf("%d",&n);
    p=(People*)malloc(n*sizeof(People));
    for(i=0; i<n; i++)
    {
        scanf("%d",&x);
        p[i].id=x;
        p[i].state=1;
        p[i].placing=i+1;
    }
    qsort(p,n,sizeof(p[0]),cmp);
    scanf("%d",&n2);
    while(n2--)
    {
        scanf("%d",&x);
        p2=bsearch(&x,p,n,sizeof(p[0]),cmp);
        if(p2!=NULL)
        {
            if(p2->state)
            {
                i=p2->placing;
                if(i==1)
                    printf("%04d: Mystery Award\n",x);
                else if(i==2||(i%2==1&&isPrime(i))) printf("%04d: Minion\n",x);
                else printf("%04d: Chocolate\n",x);
                p2->state=0;
            }
            else printf("%04d: Checked\n",x);
        }
        else printf("%04d: Are you kidding?\n",x);
    }
    free(p);
    return 0;
}