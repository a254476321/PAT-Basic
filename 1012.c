#include <stdio.h>
int main()
{
	int x,s[5]={0},f2,f4,n,i;
	f2=f4=0;
	scanf("%d",&n);
	while(n--){
		scanf("%d",&x);
		if(x%10==0){
			s[0]+=x;
		}
		else if(x%5==1){
			if(f2%2){
				s[1]-=x;
			}
			else{
				s[1]+=x;
			}
			f2++;
		}
		else if(x%5==2){
			s[2]++;
		}
		else if(x%5==3){
			s[3]+=x;
			f4++;
		}
		else if(x%5==4){
			if(x>s[4]) s[4]=x;
		}
	}
	for(i=0;i<5;i++)
	{
		if(s[i])
		{
			if(i==3){
				printf("%.1lf",(double)s[i]/f4);
			}
			else{
				printf("%d",s[i]);
			}
		}
		else if(i==1&&f2){//注意:交错求和的值可能为0
			printf("0");
		}
		else printf("N");
		if(i!=4) printf(" ");
		else printf("\n");
	}
	return 0;
}