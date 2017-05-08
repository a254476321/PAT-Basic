#include <stdio.h>
int main()
{
    int i,sum=0,m;
    char s[2][12],x,y;
    scanf("%s %c %s %c",s[0],&x,s[1],&y);
    for(i=m=0; s[0][i]!='\0'; i++)
        if(s[0][i]==x) m=m*10+x-'0';
    sum+=m;
    m=0;
    for(i=m=0; s[1][i]!='\0'; i++)
        if(s[1][i]==y) m=m*10+y-'0';
    printf("%d\n",sum+m);
    return 0;
}