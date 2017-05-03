#include<stdio.h>
int main()
{
    int n,a,s[100],i,j,temp,sum;
    scanf("%d%d",&n,&a);
    a%=n;
    for(i=0; i<n; i++)
        scanf("%d",&s[i]);
	if(!a);
    else if(n%a)
    {
    	j=0;
        temp=s[0];
        for(i=0; i<n; i++)//j移动到j+a,原先的j+a移动到j+a+a,以此类推n次
        {
            j=(j+a)%n;
            temp^=s[j];
            s[j]^=temp;
            temp^=s[j];
        }
    }
    else
    {
    	sum=n/a;
        for(i=0; i<a; i++)//同上，不同的是会回到起点，需要i++
        {
            temp=s[i];
            for(j=0; j<sum; j++)
            {
                i=(i+a)%n;
                temp^=s[i];
                s[i]^=temp;
                temp^=s[i];
            }
        }
    }
    for(i=0; i<n-1; i++)
    {
        printf("%d ",s[i]);
    }
    printf("%d\n",s[i]);
    return 0;
}