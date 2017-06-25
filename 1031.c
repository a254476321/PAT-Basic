#include <stdio.h>
int main()
{
	int n,i,j,sum,d[]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	char b[19],check[]={'1','0','X','9','8','7','6','5','4','3','2'};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",b);
		sum=0;
		for(j=0;j<17;j++)
		{
			if(b[j]=='X')//如果有x字符提前结束
			{
				sum=b[17]-'0';
				break;
			}
			if(b[j]!='0') sum+=(b[j]-'0')*d[j];
		}
		sum%=11;
		if(check[sum]==b[17]){
			i--;
			n--;
		}
        else puts(b);
	}
	if(n==0) printf("All passed\n");
	return 0;
}