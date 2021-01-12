#include<stdio.h>
main()
{
	int a,b,i,n,c;
	scanf("%d%d",&a,&b);
	for(i=1;i<=a;i++)
	{
		for(n=1;n<=i;n++)
		{printf("%d*%d=%2d\t",i,n,i*n);if(n>=b)break;}
		printf("\n");
	}
	for(c=a+1;c<=9;c++)
	{for(n=1;n<b;n++)
	printf("%d*%d=%2d\t",c,n,c*n);printf("\n");}
	printf("\n");
}