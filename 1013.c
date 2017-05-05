#include <stdio.h>
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
	int a,b,sum=1,i;
	scanf("%d%d",&a,&b);
	if(a==1){
		printf("2");
		if(b>1) printf(" ");
		else printf("\n");
	}
	for(i=3; sum<b;i+=2)
    {
        if(isPrime(i)){
			sum++;
			if(sum>=a){
				printf("%d",i);
				if(sum==b||(sum-a+1)%10==0) printf("\n");
				else printf(" ");
			}
		}
    }
	return 0;
}