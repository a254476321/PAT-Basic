#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j,flag=0,max,sum=0;
    scanf("%d",&n);
    for(i=3; i<=n; i+=2)
    {
        max=sqrt(i);
        for(j=2; j<=max; j++)
        {
            if(i%j==0)
            {
                flag=0;
                break;
            }
        }
        if(j==max+1)
        {
            if(flag) sum++;
            else flag=1;
        }
    }
    printf("%d\n",sum);
    return 0;
}