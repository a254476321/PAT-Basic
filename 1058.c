#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/* 因为题目给出的答案和学生的答案都是升序排列，
所以只需要strcmp比较就可以了 */
typedef struct program{
    int score;
    char ans[10];
} Program;
int main()
{
    int n,n2,i,*p2,j,*q;
    Program *p;
    char ans[10];
    scanf("%d%d",&n,&n2);
    q=(int*)malloc(n*sizeof(int));//记录每个人的分数
    p=(Program*)malloc(n2*sizeof(Program));//选择题的集合
    p2=(int*)malloc(n2*sizeof(int));//记录错题次数
    memset(p2,0,n2*sizeof(p2[0]));
    memset(q,0,n*sizeof(q[0]));
    for(i=0;i<n2;i++)
        scanf("%d%*d%*d %[^\n]",&p[i].score,p[i].ans);//只需要读取满分和答案
    for(i=0;i<n;i++)
    {
        for(j=0;j<n2;j++)
        {
            scanf("%*[^a-e]%[^)]",ans);
            if(!strcmp(ans,p[j].ans)) q[i]+=p[j].score;//比较答案
            else p2[j]++;
        }
        printf("%d\n",q[i]);
    }
    j=0;
    for(i=0;i<n2;i++)
        if(p2[i]>j) j=p2[i];
    if(j==0) printf("Too simple\n");
    else{
        printf("%d",j);
        for(i=0;i<n2;i++)
            if(p2[i]==j) printf(" %d",i+1);
    }
    free(p);
    free(p2);
    free(q);
    return 0;
}