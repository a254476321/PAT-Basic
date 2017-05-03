#include <stdio.h>
#include<malloc.h>
struct Table{
	int address,data,next;
};
void swap(struct Table *a,struct Table *b)
{
	struct Table temp;
	temp=*b;
	*b=*a;
	*a=temp;
}
int main()
{
	int head,n,k,i,j;
	struct Table *p;
	scanf("%d%d%d",&head,&n,&k);
	p=(struct Table*)malloc(n*sizeof(struct Table));
	for(i=0;i<n;i++)
		scanf("%d%d%d",&p[i].address,&p[i].data,&p[i].next);
	for(i=0;i<n;i++)//找到头指针
		if(p[i].address==head){
			swap(&p[0],&p[i]);
			break;
		}
	for(i=1;i<n;i++)//利用next选择排序
	{
		if(p[i-1].next==-1){//判断结束位置
			n=i;
			break;
		}
		for(j=i;j<n;j++)
		{
			if(p[j].address==p[i-1].next){
				swap(&p[j],&p[i]);
				break;
			}
		}
	}
	for(i=0;i+k<=n;i+=k)//数组反转
	{
		for(j=i;j-i<k/2;j++)
		{
			swap(&p[j],&p[i+k-j-1+i]);
		}
	}
	for(j=0;j<i-1;j++)//更新数组
	{
		p[j].next=p[j+1].address;
	}
	if(j==n-1) p[j].next=-1;
	else p[j].next=p[j+1].address;
	for(i=0;i<n-1;i++)
		printf("%05d %d %05d\n",p[i].address,p[i].data,p[i].next);
	printf("%05d %d %d\n",p[i].address,p[i].data,p[i].next);
	free(p);
    return 0;
}