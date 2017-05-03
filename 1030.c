#include <stdio.h>
#include<malloc.h>
#include<stdlib.h>
int cmp(const void *a,const void *b)
{
	return *(int*)a-*(int*)b;
}
int main()
{
	int p,*s,n,i,j,N=0;
	scanf("%d%d",&n,&p);
	s=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",&s[i]);
	}
	qsort(s,n,sizeof(s[0]),cmp);
	for(i=0;i+N<n;i++)
	{
		for(j=i+N;j<n;j++)
		{
			if(1.0*s[j]/p>s[i]) break;
			else N=j-i+1;
		} 
	}
	free(s);
	printf("%d\n",N);
	return 0;
}