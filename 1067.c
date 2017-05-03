#include <stdio.h>
#include<string.h>
int main()
{
    int n;
    char s[21],s2[50];
    scanf("%s %d",s,&n);
    getchar(); 
    while(n--)
    {
        gets(s2);
        if(strcmp("#",s2)==0) break;
        else if(strcmp(s,s2)==0){
            printf("Welcome in\n");
            break;
        }
        else {
            printf("Wrong password: %s\n",s2);
            if(n==0) printf("Account locked\n");//没有次数时需要立即输出帐号锁定
        }
    }
    return 0;
}