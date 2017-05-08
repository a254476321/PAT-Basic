#include<stdio.h>
#include<ctype.h>
int main()
{
    int sum=0,s[2]={0};
    char x;
    while((x=getchar())!='\n')
    {
        if(isupper(x)) sum+=x-64;
        else if(islower(x)) sum+=x-96;
    }
    while(sum!=0)
    {
        s[sum%2]++;
        sum/=2;
    }
    printf("%d %d",s[0],s[1]);
    return 0;
}