#include <stdio.h>
#include<string.h>
typedef struct people{
	char name[6],date[11];
} People;
int main()
{
	int n,i;
	char name[6],date[11];
	People p[2]={{"","2014/09/07"},{"","1814/09/05"}};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("\n%s %s",name,date);
		if(strcmp("1814/09/06",date)>0||strcmp(date,"2014/09/06")>0)
		{
			n--;
			i--;
			continue;
		}
		if(strcmp(p[0].date,date)>0){
			strcpy(p[0].name,name);
			strcpy(p[0].date,date);
		}
		if(strcmp(date,p[1].date)>0){
			strcpy(p[1].name,name);
			strcpy(p[1].date,date);
		}
	}
	if(n!=0) printf("%d %s %s\n",n,p[0].name,p[1].name);
	else printf("0\n");
    return 0;
}