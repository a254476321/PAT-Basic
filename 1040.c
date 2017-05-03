#include <stdio.h>
#include<malloc.h>
typedef struct pat
{
    char a;
    struct pat *next;
} PAT;
int main()
{
	long num;
	int p,a,t;
    char x;
    PAT *p1,*next,*head;
    p=a=t=num=0;
    head=NULL;
    if((x=getchar())!='\n')
    {
		if(x=='T') t++;
        head=(PAT*)malloc(sizeof(PAT));
        head->a=x;
        p1=head;
        while((x=getchar())!='\n')
        {
            if(x=='T') t++;
            next=(PAT*)malloc(sizeof(PAT));
            next->a=x;
            p1->next=next;
            p1=next;
        }
        p1->next=NULL;
    }
    p1=head;
    while(p1!=NULL)
    {
        if(p1->a=='P') p++;
        else if(p1->a=='T') t--;
        else
        {
            num+=p*t;//A前面的p数量乘以A后面的T数量
        }
        next=p1;
        p1=p1->next;
        free(next);
    }
    printf("%ld\n",num%1000000007);
    return 0;
}