#include <stdio.h>
void p(int x)//利用递归后入先出输出字符串
{
	char a[46];
	scanf("%s",a);
	if(getchar()!='\n') p(1);
	printf("%s",a);
	if(x) printf(" ");
}
int main()
{
	p(0);
	return 0;
}