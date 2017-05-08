#include<stdio.h>
#include<string.h>
#include<malloc.h>
//利用有序链表加快查找速度
typedef struct user{
    char n[21];
    struct user *next;
} User;
int main()
{
    int n,m,l,i=1,j;
    char name[21];
    User *head,*p,*next;
    scanf("%d%d%d",&n,&l,&m);
    head=(User*)malloc(sizeof(User));
    next=(User*)malloc(sizeof(User));
    head->next=next;
    next->next=NULL;
    while(i!=m)
    {
        i++;
        scanf("%*s");
        if(i>n){
            printf("Keep going...\n");
            goto loop;
        }
    }
    scanf("%s",next->n);
    puts(next->n);
    i++;
    while(i<=n)
    {
        j=1;
        while(j!=l)
        {
            i++;
            j++;
            scanf("%*s");
            if(i>n) goto loop;
        }
        p=head;
        next=p->next;
        scanf("%s",name);
        while(next!=NULL)
        {
            m=strcmp(name,next->n);
            if(m==0){
                i++;
                if(i>n) goto loop;
                scanf("%s",name);
                p=head;
                next=p->next;
                continue;
            }
            else if(m<0){
                next=(User*)malloc(sizeof(User));
                puts(name);
                strcpy(next->n,name);
                next->next=p->next;
                p->next=next;
                break;
            }
            p=next;
            next=p->next;
        }
        if(next==NULL){
            next=(User*)malloc(sizeof(User));
            puts(name);
            strcpy(next->n,name);
            next->next=NULL;
            p->next=next;
        }
        i++;
    }
    loop:p=head;
    while(p!=NULL)
    {
        next=p->next;
        free(p);
        p=next;
    }
    return 0;
}