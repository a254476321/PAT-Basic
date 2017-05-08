#include<stdio.h>
int main()
{
    int a[37]={0},n,s=0,first=1;
    char x;
    scanf("%d\n",&n);
    while(1)
    {
        x=getchar();
        if(x!=' '&&x!='\n') s+=x-'0';
        else{
            if(a[s]==1) n--;
            else a[s]=1;
            s=0;
        }
        if(x=='\n') break;
    }
    printf("%d\n",n);
    for(n=0;n<37;n++)
    {
        if(a[n]==1){
            if(first!=1) printf(" ");
            else first=0;
            printf("%d",n);
        }
    }
    return 0;
}