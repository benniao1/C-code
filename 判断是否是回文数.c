#include<stdio.h>
main()
{
	int i=0,n;
	scanf("%d",&n);
	if(n%10==n/10000%10&&n/10%10==n/1000%10)
		printf("%d�ǻ�����",n);
	else
		printf("%d���ǻ�����",n);
}