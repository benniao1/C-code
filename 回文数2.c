#include<stdio.h>
main()
{
	int n,i,ge,shi,bai;
	for(n=11;n<100;n++)
	{ge=n%10;
	shi=n/10;
	if(ge==shi)
		printf("%d\t",n);}
	for(n=100;n<593;n++)
	{ge=n%10;
	bai=n/100;
	if(ge==bai)
		printf("%d\t",n);}
}