#include <stdio.h>
#include<malloc.h>
#include<stdlib.h>
#include<math.h>
//利用螺旋横向和纵向移动的次数比上次少一次的规律
//将二维数组合并为一维数组来减少复杂度
int cmp(const void *a,const void *b)
{
    return *(int*)b-*(int*)a;
}
int main()
{
    int N,m,n,*num,i,*num2,flag=0,n2,p=-1;
    scanf("%d",&N);
    num=(int*)malloc(N*sizeof(int));
    num2=(int*)malloc(N*sizeof(int));
    for(i=0;i<N;i++)
        scanf("%d",&num[i]);
    qsort(num,N,sizeof(num[0]),cmp);
    for(n=sqrt(N);n>0;n--)
        if(N%n==0) break;
    m=N/n-1;
	n2=n;
    while(flag<N)
    {
        for(i=0;i<n2;i++)
			num2[++p]=num[flag++];
		n2--;
        for(i=0;i<m;i++)
			num2[p+=n]=num[flag++];
		m--;
        if(flag==N) break;
        for(i=0;i<n2;i++)
			num2[--p]=num[flag++];
        n2--;
        for(i=0;i<m;i++)
			num2[p-=n]=num[flag++];
        m--;
    }
	for(i=0;i<N;i++)
	{
		printf("%d",num2[i]);
		if(i%n==n-1) printf("\n");
		else printf(" ");
	}
    free(num);
    free(num2);
    return 0;
}