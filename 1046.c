#include <stdio.h>
int main()
{
    int n,a,b,c,d,s1,s2;
	s1=s2=0;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d%d%d%d",&a,&b,&c,&d);
		if(b==d) continue;
		else if(a+c==b) s2++;
		else if(a+c==d) s1++;
	}
	printf("%d %d\n",s1,s2);
    return 0;
}