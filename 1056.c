#include <stdio.h>
int main()
{
	int n,s=0,x,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        s+=x;
    }
    printf("%d",s*(n-1)*11);
	return 0;
}