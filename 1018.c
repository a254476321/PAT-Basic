#include <stdio.h>
void p(int *a)
{
	if(a[2]>a[1]&&a[2]>a[0]) printf("J");
	else if(a[1]>a[0]) printf("C");
	else printf("B");
}
int main()
{
    int n;
	int a[3]={0},b[3]={0},c[3]={0};//a记录甲的胜平负，bc记录甲乙各个手势胜利的次数
	char x,y;
	scanf("%d",&n);
	while(n--)
	{
		scanf("\n%c %c",&x,&y);
		switch(x-y)//利用ascii码的差值比较
		{
			case -1: a[0]++; b[0]++; break;
			case -7: a[0]++; b[1]++; break;
			case 8: a[0]++; b[2]++; break;
			case 1: a[2]++; c[0]++; break;
			case 7: a[2]++; c[1]++; break;
			case -8: a[2]++; c[2]++; break;
			default: a[1]++;
		}
	}
	printf("%d %d %d\n%d %d %d\n",a[0],a[1],a[2],a[2],a[1],a[0]);
	p(b);
	printf(" ");
	p(c);
	printf("\n");
    return 0;
}