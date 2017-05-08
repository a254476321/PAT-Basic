#include <stdio.h>
//利用scanf输入格式匹配输入可选符号
int main()
{
    int n,n1,n2,n3,f[5];
    char f1[10][5],f2[10][5],f3[10][5];
    n1=n2=n3=0;
    char x;
    while((x=getchar())!='\n')
    {
        if(x=='[')
            scanf("%[^]]]",f1[n1++]);
    }
    while((x=getchar())!='\n')
    {
        if(x=='[')
            scanf("%[^]]]",f2[n2++]);
    }
    while((x=getchar())!='\n')
    {
        if(x=='[')
            scanf("%[^]]]",f3[n3++]);
    }
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d%d%d%d",&f[0],&f[1],&f[2],&f[3],&f[4]);
        if(f[0]>n1||f[0]<1||f[1]>n2||f[1]<1||f[2]>n3||f[2]<1||f[3]>n2||f[3]<1||f[4]>n1||f[4]<1)
            printf("Are you kidding me? @\\/@\n");
        else printf("%s(%s%s%s)%s\n",f1[f[0]-1],f2[f[1]-1],f3[f[2]-1],f2[f[3]-1],f1[f[4]-1]);
    }
    return 0;
}