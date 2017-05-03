#include <stdio.h>
#include<string.h>
int main()
{
	char a[10001];
	int x,n,i;
	scanf("%[^E]E%d",a,&x);
	n=strlen(a);
	if(a[0]=='-') printf("-");
	if(x<0){
		x=-x; 
		printf("0.");
		for(i=1;i<x;i++)//补零
			printf("0");
		printf("%c",a[1]);//输出剩下的数字
		for(i=3;i<n;i++)
			printf("%c",a[i]);
	}
	else if(x>0){
		printf("%c",a[1]);
		for(i=3;i<x+3;i++)//小数点右移的整数部分
		{
			if(i<n) printf("%c",a[i]);
			else printf("0");
		}
		if(i<n){//如果还有则输出为小数部分
			printf(".");
			for(;i<n;i++)
				printf("%c",a[i]);
		}
	}
	else printf("%s",a+1);
	printf("\n");
    return 0;
}