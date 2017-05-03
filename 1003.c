#include <stdio.h>
#include <string.h>
int main()
{
	int n,n1;
	char a[101],*p,*t;
	scanf("%d\n",&n);
	while(n--)
	{
		gets(a);
		p=strchr(a,'P');
		t=strchr(a,'T');
		n1=strlen(a);
		if(p!=strrchr(a,'P')||t!=strrchr(a,'T'))
		{
			printf("NO\n");
		}
		else if((int)strspn(a,"PAT")==n1&&p&&t&&strchr(a,'A')&&t>p+1&&(t-p-1)*(p-a)==a+n1-t-1){
			printf("YES\n");
		}
		else printf("NO\n");
	}
	return 0;
}