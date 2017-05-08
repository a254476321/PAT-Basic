#include<stdio.h>
int main()
{
    int m,n,a,b,x,j,k;
    scanf("%d%d%d%d%d",&n,&m,&a,&b,&x);
    while(n--)
    {
        for(j=0;j<m-1;j++)
        {
            scanf("%03d",&k);
            if(k>=a&&k<=b) printf("%03d ",x);
            else printf("%03d ",k);
        }
        if(m>0){
            scanf("%03d",&k);
        	if(k>=a&&k<=b) printf("%03d\n",x);
            else printf("%03d\n",k);
        }
    }
    return 0;
}