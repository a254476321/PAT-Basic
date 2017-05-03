#include <stdio.h>
#include<stdlib.h> 
#include<string.h>
int cmp(const void *a,const void *b){
	return *(char*)b-*(char*)a;
}
int p(char *a,char *b)
{
	int x=0;
	while(*a)
	{
		if(*a==*b){
			a++;
			b++;
		}
		else if(*a>*b)
		{
			x++;
			a++;
		}
		else b++;
	}
	return x;
}
int main()
{
	int x,n1,n2;
	char a[1001],b[1001];
    scanf("%s\n%s",a,b);
	n1=strlen(a);
	n2=strlen(b);
	qsort(a,n1,sizeof(a[0]),cmp);
	qsort(b,n2,sizeof(b[0]),cmp);
	x=p(b,a);
	if(!x){
		printf("Yes %d\n",n1-n2);
	}
	else printf("No %d\n",x);
	return 0;
}