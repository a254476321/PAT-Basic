#include <stdio.h>
void p(int a,int n)
{
	if(a/n==0) printf("%d",a);
	else{
		p(a/n,n);
		printf("%d",a%n);//递归输出余数
	}
}
int main()
{
	int a,b,n;
	scanf("%d%d%d",&a,&b,&n);
	p(a+b,n);
    return 0;
}