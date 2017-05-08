#include<stdio.h>
int main()
{
    int n,n2,d,i,j,k,s1=0,s2=0;
    double e,p;
    scanf("%d%lf%d",&n,&e,&d);
    for(i=0; i<n; i++)
    {
        k=0;
        scanf("%d",&n2);
        for(j=0;j<n2;j++)
        {
            scanf("%lf",&p);
            if(p<e){
                k++;
                if(k>n2/2){
                    scanf("%*[^\n]\n");
                    break;
                }
            }
        }
        if(k>n2/2){
            if(n2>d) s2++;
            else s1++;
        }
    }
    printf("%.1lf%% %.1lf%%\n",(double)s1/n*100,(double)s2/n*100);
    return 0;
}