#include <stdio.h>
#include<math.h>
void p2(char a,int n)
{
	for(int i=0;i<n;i++)
		printf("%c",a);
}
void p(char c,int n,int x)
{
	if(n!=1){
		p2(' ',x);
		p2(c,n);
		printf("\n");
		p(c,n-2,x+1);
	}
		p2(' ',x);
		p2(c,n);
		printf("\n");
}
int main()
{
	int a,n;
	char c;
	scanf("%d %c",&a,&c);
	n=sqrt((a+1)/2);
	p(c,2*n-1,0);
	printf("%d",a-n*n*2+1);
    return 0;
}