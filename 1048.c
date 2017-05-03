#include <stdio.h>
#include<string.h>
#include<ctype.h>
char* rev(char *a,int n)
{
	for(int i=0;i<n/2;i++)
	{
		a[i]^=a[n-i-1];
		a[n-i-1]^=a[i];
		a[i]^=a[n-i-1];
	}
	return a;
}
int main()
{
	int i;
    char a[101],b[101],n,n2;
	scanf("%s %s",a,b);
	n=strlen(a);
	n2=strlen(b);
	rev(a,n);
	rev(b,n2);
	if(n>n2){
		for(i=n2;i<n;i++)
			b[i]='0';
		b[i]=0;
        n2=n;
	}
	for(i=0;i<n;i++)
	{
		if(i%2){
			b[i]-=a[i]-'0';
			if(!isdigit(b[i])) b[i]+=10;
		}
		else{
			b[i]=(b[i]+a[i]-96)%13+'0';
				if(!isdigit(b[i])){
					switch(b[i]-'9')
					{
						case 1:b[i]='J';break;
						case 2:b[i]='Q';break;
						default:b[i]='K';
					}
				}
		}
	}
    for(i=n2-1;i>=0;i--)
        printf("%c",b[i]);
    return 0;
}