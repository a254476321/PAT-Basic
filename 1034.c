#include <stdio.h>
long labs(long a)
{
	return a<0?-a:a;
}
long p(long a,long b)
{
	long t;
	if(a<b){
		a^=b;
		b^=a;
		a^=b;
	}
	if(b==0||a==0) return 1; 
	while((t=a%b)!=0)
	{
		a=b;
		b=t;
	}
	return b<0?-b:b;
}
void p2(long *a,long *b)
{
	long x;
	if(*a==0){
		*b=1;
		return; 
	}
	else x=p(*a,*b);
	*a/=x;
	*b/=x;
}
void p3(long a,long b)
{
	if(a<0) printf("(");
	if(b==1) printf("%ld",a);
	else if(a/b!=0) printf("%ld %ld/%ld",a/b,labs(a%b),b);
	else printf("%ld/%ld",a%b,b);
	if(a<0) printf(")");
}
int main()
{
	
	long a,b,c,d,x,x1,x2;
	scanf("%ld/%ld %ld/%ld",&a,&b,&c,&d);
	p2(&a,&b);
	p2(&c,&d);
	x=p(b,d);
	
	p3(a,b);
	printf(" + ");
	p3(c,d);
	printf(" = ");
	x2=b/x*d;
	x1=x2/b*a+x2/d*c;
	p2(&x1,&x2);
	p3(x1,x2);
	printf("\n");
	
	p3(a,b);
	printf(" - ");
	p3(c,d);
	printf(" = ");
	x2=b/x*d;
	x1=x2/b*a-x2/d*c;
	p2(&x1,&x2);
	p3(x1,x2);
	printf("\n");
	
	p3(a,b);
	printf(" * ");
	p3(c,d);
	printf(" = ");
	x1=p(a,d);
	x=p(c,b);
	x2=b/x*(d/x1);
	x1=a/x1*(c/x);
	if(x1==0) x2=1;
	p3(x1,x2);
	printf("\n");
	
	p3(a,b);
	printf(" / ");
	p3(c,d);
	printf(" = ");
	if(c==0) printf("Inf");
	else{
		x1=p(a,c);
		x=p(d,b);
		x2=b/x*(c/x1);
		x1=a/x1*(d/x);
		if(x2<0){
			x2=-x2;
			x1=-x1;
		}
		p3(x1,x2);
	}
	printf("\n");
	return 0;
}