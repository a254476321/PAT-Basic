#include <stdio.h>
void p(int a,int b)
{
	if(a>=10) p(a/10,1);
	switch(a%10)
	{
		case 0:printf("ling"); break;
		case 1:printf("yi"); break;
		case 2:printf("er"); break;
		case 3:printf("san"); break;
		case 4:printf("si"); break;
		case 5:printf("wu"); break;
		case 6:printf("liu"); break;
		case 7:printf("qi"); break;
		case 8:printf("ba"); break;
		default: printf("jiu");
	}
	if(b) printf(" ");
}
int main()
{
	int sum=0;
	char x;
	while('\n'!=(x=getchar()))
	{
		sum+=x-'0';
	}
	p(sum,0);
	return 0;
}