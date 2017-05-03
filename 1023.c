#include <stdio.h>
#include<stdlib.h>
int cmp(const void* a,const void *b)
{
	return *(int*)a-*(int*)b;
}
int main()
{
	int a[10],i;
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	for(i=1;i<10;i++)//输出除0外最小的可用数
		if(a[i]){
			printf("%d",i);
			a[i]--;
			break;
		}
	i=0;
	while(i<10)
	{
		if(a[i]==0){
			i++;
			continue;
		}
		printf("%d",i);
		a[i]--;
	}
    return 0;
}