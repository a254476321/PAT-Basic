#include <stdio.h>
#include<math.h>
int main()
{
	int a,b,sum=1,i,j,flag=1,max;
	scanf("%d%d",&a,&b);
	if(a==1){
		printf("2");
		if(b>1) printf(" ");
		else printf("\n");
	}
	for(i=3; sum<b;i+=2)
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
        if(flag){
			sum++;
			if(sum>=a){
				printf("%d",i);
				if(sum==b||(sum-a+1)%10==0) printf("\n");
				else printf(" ");
			}
		}
		else flag=1;
    }
	return 0;
}