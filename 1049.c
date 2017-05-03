#include <stdio.h>
int main()
{
    int n,i;
    double sum=0,x;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lf",&x);
        sum+=x*(n-i)*(i+1);
    }
    printf("%.2lf",sum);
    return 0;
}