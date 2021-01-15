#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int num=0;
	int right=0;
	int a,b,c;
	int yn;
	printf("欢迎使用两位数加法练习程序。");
	printf("****************************");
	srand(time(NULL));
	while (1)
	{   num++;
	    printf("\n第%d题",num);
		a=rand()%100;
		b=rand()%100;
		printf("%d+%d=",a,b);
		scanf("%d",&c);
		if(c==a+b)
		{  printf("恭喜你，答对了！");
		right++;
		}
		else
			printf("答错了，正确答案是：%d",a+b);
		printf("要继续练习吗？(0=推出；非0=继续)");
			scanf("%d",&yn);
		if(yn==0)break;
	}
	printf("\n本次练习你做了%d题，",num);
	printf("其中答对了%d题，答错了%d题",right,num-right);
	printf("\n正确率为%5.lf%%\n",(float)right/num*100);
	printf("祝你学习进步，再见！\n");
}
