#include <stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    int n,x,i;
	char a[8],l[][5]={"tret","jan","feb","mar","apr","may","jun","jly","aug","sep","oct","nov","dec"};
	char h[][4]={"tam","hel","maa","huh","tou","kes","hei","elo","syy","lok","mer","jou"};
	scanf("%d\n",&n);
	while(n--)
	{
		gets(a);
		if(isdigit(a[0])){
			sscanf(a,"%d",&x);
			if(x<13) printf("%s\n",l[x]);
			else if(x%13) printf("%s %s\n",h[x/13-1],l[x%13]);
			else printf("%s\n",h[x/13-1]);
		}
		else{
			x=0;
			if(strlen(a)>4)
			{
				while(strncmp(a,h[x++],3));
				x*=13;
				i=0;
				while(strncmp(a+4,l[i++],3));
				x+=i-1;
			}
			else{
				while(x!=12&&strncmp(a,h[x++],3));
				if(x==12&&strcmp(a,"jou")){
					while(strncmp(a,l[x--],3));
					x++;
				}
				else x*=13;
			}
			printf("%d\n",x);
		}
	}
    return 0;
}