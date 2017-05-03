#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	a=(b-a+50)/100;
	b=a%60;
	a/=60;
	printf("%02d:%02d:%02d\n",a/60,a%60,b);
    return 0;
}