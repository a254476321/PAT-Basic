#include <stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct yb{
	double num,price,unit;//数量，总价，单价
};
int cmp(const void *a,const void *b)
{
	return ((struct yb*)b)->unit>((struct yb*)a)->unit?1:-1;
}
int main()
{
	int sum,i,n;
	double x=0;
	struct yb *a;
	scanf("%d%d",&n,&sum);
	a=(struct yb*)malloc(n*sizeof(struct yb));
	for(i=0;i<n;i++)
		scanf("%lf",&a[i].num);
	for(i=0;i<n;i++)
	{
		scanf("%lf",&a[i].price);
		a[i].unit=1.0*a[i].price/a[i].num;
	}
	qsort(a,n,sizeof(a[0]),cmp);
	for(i=0;i<n;i++)
	{
		if(sum>a[i].num)
		{
			x+=a[i].price;
			sum-=a[i].num;
		}
		else{
			x+=a[i].unit*sum;
			break;
		}
	}
	printf("%.2lf\n",x);
    return 0;
}