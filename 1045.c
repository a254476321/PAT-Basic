#include <stdio.h>
#include<malloc.h>
#include<stdlib.h>
int cmp(const void *a,const void *b)
{
	return *(int*)a-*(int*)b;
}
int main()
{
    int n,*p,*p2,i,flag=0,num=0;
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));
	p2=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",&p[i]);
		p2[i]=p[i];
	}
	qsort(p2,n,sizeof(p2[0]),cmp);
	for(i=0;i<n;i++)
	{
		if(p[i]>flag) flag=p[i];
		if(p[i]==p2[i]&&p[i]==flag) p2[num++]=p[i];//主元比右边的都大，且是最终位置
		
	}
	printf("%d\n",num);
	for(i=0;i<num;i++)
	{
		if(flag) flag=0;
		else printf(" ");
		printf("%d",p2[i]);
	}
	printf("\n");
    return 0;
}