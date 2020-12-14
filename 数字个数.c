#include<stdio.h>

main()
{
	int a,b,c=0,d[10]={0,0,0,0,0,0,0,0,0,0},i,n;
	scanf("%d",&a);
    while(a>10)
	{
		b=a%10;
		a=a/10;
		d[b]++;
	}
	d[a]++;
	for(;c<10;c++)
	{	if(d[c]!=0)
	printf("%d¸ö%d\n",d[c],c);}
	

}