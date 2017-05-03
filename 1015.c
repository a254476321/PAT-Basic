#include <stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct Student
{
    int id,d,c,x,sum;
};
int cmp(const void *a,const void *b)
{
    struct Student *p1=(struct Student*)a,*p2=(struct Student*)b;
	if((*p1).x!=(*p2).x) return (*p2).x-(*p1).x;
    else if((*p2).sum!=(*p1).sum) return (*p2).sum-(*p1).sum;
    else if((*p2).d!=(*p1).d) return (*p2).d-(*p1).d;
    else return (*p1).id-(*p2).id;
}
int main()
{
    int n,l,h,i;
    struct Student *s;
    scanf("%d%d%d",&n,&l,&h);
    s=(struct Student*)malloc(n*sizeof(struct Student));
    for(i=0; i<n; i++)
    {
        scanf("%d%d%d",&s[i].id,&s[i].d,&s[i].c);
        if(s[i].d<l||s[i].c<l)
        {
            i--;
            n--;
        }
        else
        {
            s[i].sum=s[i].d+s[i].c;
            if(s[i].d>=h)
            {
                if(s[i].c>=h) s[i].x=4;
                else s[i].x=3;
            }
            else if(s[i].d>=s[i].c) s[i].x=2;
            else s[i].x=1;
        }
    }
    qsort(s,n,sizeof(s[0]),cmp);
    printf("%d\n",n);
    for(i=0; i<n; i++)
        printf("%d %d %d\n",s[i].id,s[i].d,s[i].c);
	free(s);
    return 0;
}