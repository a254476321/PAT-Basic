#include <stdio.h>
int main()
{
    int n1,n2,a[75]={0};
    char s;
	n1=n2=0;
    while((s=getchar())!='\n')
	{
		a[s-48]++;
		n1++;
	}
    while((s=getchar())!='\n')
	{
		if(a[s-48]){
			a[s-48]--;
			n1--;
		}
		else n2++;
	}
    if(!n2) printf("Yes %d\n",n1);
    else printf("No %d\n",n2);
    return 0;
}