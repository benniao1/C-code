#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int num=0;
	int right=0;
	int a,b,c;
	int yn;
	printf("��ӭʹ����λ���ӷ���ϰ����");
	printf("****************************");
	srand(time(NULL));
	while (1)
	{   num++;
	    printf("\n��%d��",num);
		a=rand()%100;
		b=rand()%100;
		printf("%d+%d=",a,b);
		scanf("%d",&c);
		if(c==a+b)
		{  printf("��ϲ�㣬����ˣ�");
		right++;
		}
		else
			printf("����ˣ���ȷ���ǣ�%d",a+b);
		printf("Ҫ������ϰ��(0=�Ƴ�����0=����)");
			scanf("%d",&yn);
		if(yn=0)break;
	}
	printf("\n������ϰ������%d�⣬",num);
	printf("���д����%d�⣬�����%d��",right,num-right);
	printf("\n��ȷ��Ϊ%5.lf%%\n",(float)right/num*100);
	printf("ף��ѧϰ�������ټ���\n");
}