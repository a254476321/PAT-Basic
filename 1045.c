#include <stdio.h>
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
		if(p[i]==p2[i]&&p[i]==flag) p2[num++]=p[i];
		
	}
	printf("%d\n",num);
	for(i=0;i<num;i++)
	{
		if(flag) flag=0;
		else printf(" ");
		printf("%d",p2[i]);
	}
	printf("\n");
    free(p);
    free(p2);
    return 0;
}