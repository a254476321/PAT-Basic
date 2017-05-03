#include <stdio.h>
#include<string.h>
int main(){
	int i,flag=0,week;
	char a[4][61],w[][4]={"MON","TUE","WED","THU","FRI","SAT","SUN"};
	for(i=0;i<4;i++)
	{
		scanf("%s",a[i]);
	}
	for(i=0;a[0][i]!=0&&a[1][i]!=0;i++)
	{
		
			if(!flag){
				if(a[0][i]==a[1][i]&&a[0][i]>='A'&&a[0][i]<='G'){
				week=a[0][i]-64;
				flag=1;}
			}
			else{
				if(a[0][i]==a[1][i])
				{
					if(a[0][i]>='A'&&a[0][i]<='N'){
						flag=a[0][i]-55;
						break;
					}
					else if(a[0][i]>='0'&&a[0][i]<='9'){
						flag=a[0][i]-'0';
						break;
					}
				}
			}
		}
	for(i=0;a[2][i]!=0&&a[3][i]!=0;i++){
		if(a[2][i]==a[3][i]&&(a[2][i]>='A'&&a[2][i]<='Z'||a[3][i]>='a'&&a[3][i]<='z'))
			break;
	}
	if(i>59){
		i%=60;
		flag++;
		if(flag>23){
			flag%=24;
			week=week%7+1;
		}
	}
	printf("%s %02d:%02d\n",w[week-1],flag,i);
	return 0;
}