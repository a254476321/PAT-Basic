#include<stdio.h>
#include<stdlib.h>
void p(int a,int *b)
{
    while(1)
    {
        a=a%2?(a*3+1)/2:a/2;
        if(a<101)//当数字超过数组长度时跳过
        {
            if(b[a]) return;//值为1时表示已判断过，直接return
            else b[a]=1;
        }
    }
}
int cmp(const void *a,const void *b)
{
    return *(int*)b-*(int*)a;
}
int main()
{
    int i,n,a[101]= {0},b[101],flag=0;
    a[1]=1;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&b[i]);
        p(b[i],a);
    }
    qsort(b,n,sizeof(a[0]),cmp);
    for(i=0; i<n; i++)
    {
        if(a[b[i]]!=1)//输出在a数组中不为0的数
        {
            if(flag) printf(" ");
            printf("%d",b[i]);
            flag++;
        }
    }
    printf("\n");
    return 0;
}