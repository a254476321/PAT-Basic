#include<stdio.h>
#include<math.h>
_Bool isPrime(int a)
{
    int max=sqrt(a),i;
    for(i=3; i<=max; i+=2)
    {
        if(a%i==0) return 0;
    }
    return 1;
}
int main()
{
    int n,i,flag=0,sum=0;
    scanf("%d",&n);
    for(i=3; i<=n; i+=2)
    {
        if(isPrime(i))
        {
            if(flag) sum++;
            else flag=1;
        }
        else flag=0;
    }
    printf("%d\n",sum);
    return 0;
}