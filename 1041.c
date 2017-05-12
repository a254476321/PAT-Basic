#include <stdio.h>
#include<malloc.h>
int main()
{
	int n,test,number;
	short *q;
	long *p,num;
	scanf("%d",&n);
	p=(long*)malloc((n+1)*sizeof(long));
	q=(short*)malloc((n+1)*sizeof(short));
	while(n--)
	{
		scanf("%ld %d %d",&num,&test,&number);
		p[test]=num;
		q[test]=number;
	}
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&test);
		printf("%ld %d\n",p[test],q[test]);
	}
    free(p);
    free(q);
	return 0;
}