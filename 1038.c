#include <stdio.h>
int main()
{
    int n,score[101]={0},x;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&x);
		score[x]++;
	}
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&x);
		printf("%d",score[x]);
		if(n!=0) printf(" ");
		else printf("\n");
	}
	return 0;
}