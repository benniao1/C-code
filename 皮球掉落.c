#include<stdio.h>
main()
{
	int n=100,i,b=100,c;
	for(i=0;i<=10;i++)
	{
		n=n/2;
		b=n+b;
	}
printf("%d\n",b);
printf("%d\n",n);
}