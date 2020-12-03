#include<stdio.h>
main()
{
	int m=100,n=0,a,b,c;
	for(a=m/5;a>0;a--)
		for(b=m/2;b>0;b--)
			for(c=m;c>0;c--)
				if(a*5+b*2+c==m)
				{
					printf("5fen:%d,2fen:%d,1fen:%d,total:%d\n",a,b,c,a+b+c);
					n++;
				}
				printf("count=%d",n);
				return 0;
}