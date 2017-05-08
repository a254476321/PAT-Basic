#include<stdio.h>
#include<math.h>
int main()
{
    int n,a,b,sum=0,x;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d",&a,&b);
        x=a*a+b*b;
        if(x>sum) sum=x;
    }
    printf("%.2lf",sqrt(sum));
    return 0;
}