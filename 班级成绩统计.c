#include<stdio.h>
main()
{float score[10];
int i,cnt;
float sum=0.0,aver=0.0;
for(i=0;i<10;i++)
    scanf("%f",&score[i]);
cnt=0;
for(i=0;i<10;i++)
{
   if(score[i]>=60)  cnt++;
   sum+=score[i];
}
aver=sum/10.0;
printf("及格人数=%d\n",cnt);
printf("平均成绩=%5.1f\n",aver);
}
