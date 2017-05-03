#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int x,first=1,n,i,y=0;
    char a[1001],b[10]="";
    scanf("%s %d",a,&x);
    n=strlen(a);
    for(i=0; i+8<n; i+=8)//每次计算截取8位
    {
        if(first)
        {
            first=0;
            strncpy(b,a,8);
            y=atoi(b);
            printf("%d",y/x);
        }
        else
        {
            strncpy(b+1,a+i,8);
            b[0]=y+'0';//将上次的余数加入到下次的计算里
            y=atoi(b);
            printf("%08d",y/x);
        }
        y%=x;
    }
    n=strlen(a+i);
    strncpy(b+1,a+i,n+1);
    b[0]=y+'0';
    y=atoi(b);
    if(i==0) printf("%d %d\n",y/x,y%x);
    else
    {
        strcpy(b,"%00d %d\n\0");
        b[2]=n+'0';
        printf(b,y/x,y%x);
    }
    return 0;
}