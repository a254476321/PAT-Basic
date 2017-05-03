#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int n,i,n2;
    double x,sum=0;
    char a[20],*p,k;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%s",a);
        p=strchr(a,'.');
        if(p!=NULL) n2=strlen(p);
        else n2=3;
        if(p!=strrchr(a,'.')||n2>3)
        {
            printf("ERROR: %s is not a legal number\n",a);
            i--;
            n--;
            continue;
        }
        else
        {
            if(isdigit(a[0])||(a[0]=='-'&&isdigit(a[1])))
            {
                k=0;
                sscanf(a,"%lf%c",&x,&k);
            }
            else k=1;
            if(k==0&&x>=-1000&&x<=1000) sum+=x;
            else
            {
                printf("ERROR: %s is not a legal number\n",a);
                i--;
                n--;
                continue;
            }
        }
    }
    if(n==0) printf("The average of 0 numbers is Undefined");
    else if(n==1) printf("The average of 1 number is %.2lf",sum);
    else printf("The average of %d numbers is %.2lf",n,sum/n);
    return 0;
}