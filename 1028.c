#include <stdio.h>
#include<string.h>
int main()
{
	int n,i;
	char name[6],date[11],minname[6],maxname[6];
	char p[][11]={"2014/09/07","1814/09/05"};
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
		if(strcmp(p[0],date)>0){
			strcpy(maxname,name);
			strcpy(p[0],date);
		}
		if(strcmp(date,p[1])>0){
			strcpy(minname,name);
			strcpy(p[1],date);
		}
	}
	if(n!=0) printf("%d %s %s\n",n,maxname,minname);
	else printf("0\n");
    return 0;
}