#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int cmp(const void *a,const void *b)
{
	return strcmp(b,a);
}
char* rev(char *a)//相当于strrev
{
	int n=strlen(a);
	for(int i=0;i<n/2;i++)
	{
		a[i]^=a[n-i-1];
		a[n-i-1]^=a[i];
		a[i]^=a[n-i-1];
	}
	return a;
}
int main()
{
	int x,y;
    char a[5];
	scanf("%d",&x);
	sprintf(a,"%04d",x);
	do{
		qsort(a,4,sizeof(a[0]),cmp);
		x=atoi(a);
		y=atoi(rev(a));
		sprintf(a,"%04d",x-y);
		printf("%04d - %04d = %04d\n",x,y,x-y);
	}while(x-y!=0&&x-y!=6174);
    return 0;
}