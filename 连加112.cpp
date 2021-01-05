#include<stdio.h>
main()
{
	int j=0,i,a[10]={1,12,123,1234,12345,123456,1234567,1234567,12345678,123456789};
	for(i=0;i<10;i++)
		j=j+a[i];
	for(i=0;i<10;i++)
	{printf("%d",a[i]);
	if(i<9)printf("+");}printf("=%d",j);
}