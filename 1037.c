#include <stdio.h>
int p()
{
	int a,sum=0;
	scanf("%d.",&a);
	sum+=a*493;
	scanf("%d.",&a);
	sum+=a*29;
	scanf("%d",&a);
	sum+=a;
	return sum;
}
int main()
{
    int sum;
	sum=p()-p();
	if(sum>0) printf("-");
	else sum=-sum;
	printf("%d.%d.%d\n",sum/493,sum/29%17,sum%29);
	return 0;
}