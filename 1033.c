#include <stdio.h>
#include<ctype.h>
int main()
{
	char a[80]={0},x,i;
	while((x=getchar())!='\n')
	{
		a[x-43]=1;
		if(isupper(x)) a[x-11]=1;
		else if(x=='+') {
			for(i='A';i<='Z';i++){
				a[i-43]=1;
			}
		}
	}
	while((x=getchar())!='\n')
	{
		if(!a[x-43]) printf("%c",x);
	}
	printf("\n");
	return 0;
}