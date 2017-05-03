#include <stdio.h>
#include<ctype.h>
int main()
{
	int i,j=0,a[26]={0};
	char x,k;
	while((x=getchar())!='\n')
	{
		if(isalpha(x)){
			a[tolower(x)-97]++;
		}
	}
	for(i=0;i<26;i++)
	{
		if(a[i]>j){
			j=a[i];
			k=i;
		}
	}
	printf("%c %d\n",k+97,j);
	return 0;
}