#include <stdio.h>
#include<malloc.h>
#include<math.h>
/*
将颜色值加入到有序链表中，
通过比较判断是否重复（state），
然后再对其与周围比较颜色差得出结果
*/
typedef struct unique
{
    short x,y,state;
    int value;
    struct unique *next;
} Unique;
int main()
{
    short i,j,k,x,y;
    int m,n,minus,sum=0,**c;
    int p[][2]= {{0,1},{1,1},{1,0},{1,-1},{0,-1},{-1,-1},{-1,0},{-1,1}};
    Unique *head,*p1,*next;
    scanf("%d%d%d",&n,&m,&minus);
    c=(int**)malloc(m*sizeof(int*));
    head=(Unique*)malloc(sizeof(Unique));
    head->value=-1;
    next=(Unique*)malloc(sizeof(Unique));
    next->next=NULL;
    next->value=16777216;
    next->state=0;
    head->next=next;
    for(i=0; i<m; i++)
    {
        c[i]=(int*)malloc(n*sizeof(int));
        for(j=0; j<n; j++)
        {
            scanf("%d",&c[i][j]);
            p1=head;
            next=p1->next;
            while(next!=NULL)
            {
                if(next->value==c[i][j]){
                    next->state=0;
                    break;
                }
                else if(next->value>c[i][j]){
                    next=(Unique*)malloc(sizeof(Unique));
                    next->next=p1->next;
                    p1->next=next;
                    next->value=c[i][j];
                    next->x=i;
                    next->y=j;
                    next->state=1;
                    break;
                }
                p1=next;
                next=p1->next;
            }
        }
    }
    p1=head->next;
    while(p1!=NULL)
    {
        if(p1->state)
        {
            for(k=0; k<8; k++)
                {
                	x=p1->x+p[k][0];
                	y=p1->y+p[k][1];
                    if(x>=0&&x<m&&y>=0&&y<n&&abs(p1->value-c[x][y])<=minus)
                    {
                        p1->state=0;
                        break;
                    }
                }
            if(p1->state){
                sum++;
                next=p1;
            }
        }
        p1=p1->next;
    }
    if(sum==0) printf("Not Exist\n");
    else if(sum>1) printf("Not Unique\n");
    else printf("(%d, %d): %d\n",next->y+1,next->x+1,next->value);
    for(i=0;i<m;i++)
        free(c[i]);
    free(c);
    p1=head;
    while(p1!=NULL)
    {
        next=p1->next;
        free(p1);
        p1=next;
    }
    return 0;
}