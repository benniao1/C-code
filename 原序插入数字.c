#include<stdio.h>
main()
{
	int a[6]={12,23,45,87,90},b[6];
	int i,t,z,c;
	scanf("%d",&z);
	for(i=0;i<5;i++)
		b[i]=a[i];
        b[5]=z;
for(i=0;i<=6;i++)
		for(c=0;c<5;c++)
			if(b[c]>b[c+1])
			{t=b[c];b[c]=b[c+1];b[c+1]=t;}
	for(i=0;i<6;i++)
	printf("%d\n",b[i]);
}