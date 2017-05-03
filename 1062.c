#include<stdio.h>
int p(int a,int b)
{
    int c;
    if(b>a){
        a^=b;
        b^=a;
        a^=b;
    }
    if(b==0) return -1;
    while((c=a%b)!=0)
    {
        a=b;
        b=c;
    }
    return b<0?-b:b;
}
int main(){
    int a,b,flag=0;
    double s1,s2;
    scanf("%d/%d",&a,&b);
    s1=(double)a/b;
    scanf("%d/%d",&a,&b);
    s2=(double)a/b;
    scanf("%d",&a);
    if(s1>s2){
        s1=s1+s2;
        s2=s1-s2;
        s1=s1-s2;
    }
    //从范围内最小的分子开始递增比较，如果是最简分数则输出
    for(b=s1*a+1;(double)b/a<s2;b++)
    {
        if(p(a,b)==1){
            if(flag) printf(" ");
            else flag=1;
            printf("%d/%d",b,a);
        }
    }
    return 0;
}