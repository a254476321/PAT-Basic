#include <stdio.h>
int main()
{
    int n,i;
    char x,s[8];
    scanf("%d %c",&n,&x);
	sprintf(s,"%%c%%%dc\n",n-1);
    for(i=0; i<n; i++)
        printf("%c",x);
    printf("\n");
    for(i=n/2+2; i<n; i++)
        printf(s,x,x);
    for(i=0; i<n; i++)
        printf("%c",x);
    printf("\n");
    return 0;
}