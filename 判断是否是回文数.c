#include<stdio.h>
main()
{
	int i=0,n;
	scanf("%d",&n);
	if(n%10==n/10000%10&&n/10%10==n/1000%10)
		printf("%d是回文数",n);
	else
		printf("%d不是回文数",n);
}