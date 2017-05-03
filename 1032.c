#include <stdio.h>
#include<malloc.h>
int main()
{
	int n,*p,x=0,a,b,i;
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
		p[i]=0;
	while(n--){
		scanf("%d%d",&a,&b);
		if(x<a) x=a;//x为最大编号
		p[a-1]+=b;
	}
	a=-1;
	for(i=0;i<x;i++)
	{
		if(a<p[i]){
			a=p[i];
			b=i;
		}
	}
	printf("%d %d\n",b+1,a);
	free(p);
	return 0;
}