#include <stdio.h>
int main()
{
	int n,i,j,sum,d[]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	char b[100][19],check[]={'1','0','X','9','8','7','6','5','4','3','2'};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",b[i]);
		sum=0;
		for(j=0;j<17;j++)
		{
			if(b[i][j]!='0') sum+=(b[i][j]-'0')*d[j];
		}
		sum%=11;
		if(check[sum]==b[i][17]){
			i--;
			n--;
		}
	}
	if(n==0) printf("All passed\n");
	else{
		for(i=0;i<n;i++){
			puts(b[i]);
		}
	}
	return 0;
}