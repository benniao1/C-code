#include<stdio.h>
main()
{
	int a[10]={9,5,3,7,2,4,1,0,6,8},i,b,c;
	for(i=0;i<=10;i++)
		for(b=0;b<9;b++)
			if(a[b]<a[b+1])
			{c=a[b];a[b]=a[b+1];a[b+1]=c;}
			for(i=0;i<10;i++)
				printf("%d\n",a[i]);
}