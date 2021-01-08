#include<stdio.h>
main()
{
	int a[100][100],i,j,k,n;
	scanf("%d",&n);
	for(k=1;k<=n;k++)
		for(i=k-1;i<2*n-k;i++)
			for(j=k-1;j<2*n-k;j++)
				a[i][j]=k;
			for(i=0;i<2*n-1;i++)
			{for(j=0;j<2*n-1;j++)
			printf("%d",a[i][j]);
			printf("\n");
			}
}