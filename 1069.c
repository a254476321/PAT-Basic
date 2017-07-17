#include<stdio.h>
#include<string.h>
/* 利用二分查找算法查重，然后用插入排序方
便下次查找，利用指针的特性对字符串排序; */
int main()
{
    int n,m,l,i=1,j,k,low,high,mid;
    scanf("%d%d%d",&n,&l,&m);
    k=n/l+1;
    char name[k][21],*pn[k],*p;
    for(j=0; j<k; j++) //字符串与指针对应
    {
        pn[j]=name[j];
    }
    k=0;
    //过滤第m名之前的字符串
    while(i!=m)
    {
        i++;
        scanf("%*s");
        if(i>n)
        {
            printf("Keep going...\n");
            return 0;
        }
    }
    //输出并记录第一个中奖的名字
    scanf("%s",name[k++]);
    puts(name[0]);
    i++;
    while(i<=n)
    {
        //过滤字符串
        j=1;
        while(j!=l)
        {
            i++;
            j++;
            scanf("%*s");
            if(i>n) return 0;
        }
loop:
        scanf("%s",name[k]);
        //二分查重
        low=0;
        high=k-1;
        while(low<=high)
        {
            mid=(low&high)+((low^high)>>1);
            m=strcmp(pn[mid],pn[k]);
            if(m>0)
            {
                high=mid-1;
            }
            else if(m<0)
            {
                low=mid+1;
            }
            else
            {
                break;
            }
        }
        //如果相等则输入下一位继续查重，否则记录输出
        if(m==0)
        {
            if(++i>n) break;
            goto loop;
        }
        else
        {
            puts(pn[k]);
            //插入排序
            while(low<k)
            {
                p=pn[k];
                pn[k]=pn[low];
                pn[low++]=p;
            }
            k++;
        }
        i++;
    }
    return 0;
}