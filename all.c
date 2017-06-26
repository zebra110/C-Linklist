#include "head.h"
extern struct list1 *head;
extern struct list1 *outhead;
float all(int i)
{ 
  float money=0;
  struct list1 *q;
  int count=0,year,month,day,year1,month1,day1,a=0;
  char name[20],detail[20];
  if(i==1&&head==NULL)    {printf("        \t无任何记录！\n");a=1;}
  if(i==-1&&outhead==NULL){printf("        \t无任何记录！\n");a=1;}
	if(a==0)
	{
	if(i==1)q=head->next;
	if(i==-1)q=outhead->next;
   printf("\n\n");
if(i==1||i==-1)
{
	while(q)
	{
	if(i==1)money+=atoi(q->info1.money);
	if(i==-1)money+=atoi(q->info1.outmoney);//atoi函数将字符型转换为浮点型 用于金额总数的统计	
		q=q->next;
   } 
	if(i==1)printf("                     总收入为:%.2f元\n",money);
   if(i==-1)printf("                     总支出为:%.2f元\n",money);
}	
   
	if(i==2||i==-2)
   { printf("请输入查询的年月日（例如：2005-02-21）:");
      fflush(stdin);
      scanf("%d-%d-%d",&year,&month,&day); 
	while(q!=NULL)
	{  if(q->info1.year==year&&q->info1.month==month&&q->info1.day==day)
	  {if(i==2)money+=atoi(q->info1.money);
	  if(i==-2)money+=atoi(q->info1.outmoney);	
		count=1;}	
		q=q->next;
	}
	if(count==0)
	printf("抱歉，没有该日信息记录！\n");
	if(i==2)printf("%d-%d-%d总收入为:%.2f元\n",year,month,day,money);
    if(i==-2)printf("%d-%d-%d总支出为:%.2f元\n",year,month,day,money);
		
   }
	
	
	if(i==3||i==-3)
   {
	printf("请输入查询的姓名:");
   fflush(stdin);
   scanf("%s",name);
	q=head->next; 
	while(q!=NULL)
	{  if(strcmp(q->info1.name,name)==0)
      {if(i==3)money+=atoi(q->info1.money);
	    if(i==-3)money+=atoi(q->info1.outmoney);}
		q=q->next;
		count=1;
	}
		if(count==0)
	printf("抱歉，没有该姓名记录！\n");
	if(i==3)printf("家庭成员：%s的总收入为：%.2f元\n",name,money);
  if(i==-3)printf("家庭成员：%s的总支出为：%.2f元\n",name,money);
		
   }
	
		if(i==4||i==-4)
   {
	printf("请输入查询的姓名:");
   fflush(stdin);
   scanf("%s",detail);
	q=head->next; 
	while(q!=NULL)
	{  if(strcmp(q->info1.detail,detail)==0)
      {if(i==4)money+=atoi(q->info1.money);
	    if(i==-4)money+=atoi(q->info1.outmoney);}
		q=q->next;
		count=1;
	}
		if(count==0)
	printf("抱歉，没有该姓名记录！\n");
	if(i==4)printf("备注：%s的总收入为：%.2f元\n",detail,money);
  if(i==-4)printf("备注：%s的总支出为：%.2f元\n",detail,money);
		}
		
			if(i==5)
   {
	printf("请输入查询的起止日期:");
   fflush(stdin);
   scanf("%d-%d-%d-%d-%d-%d",&year,&month,&day,&year1,&month1,&day1);
    //scanf("%d",&year);
	q=head->next; 
	while(q!=NULL)
	{  if(((year==q->info1.year)||(year<q->info1.year))&&((month==q->info1.month)||(month<q->info1.month))&&((day==q->info1.day)||(day<q->info1.day)))
	if(((year1==q->info1.year)||(year1>q->info1.year))&&((month1==q->info1.month)||(month1>q->info1.month))&&((day1==q->info1.day)||(day1>q->info1.day)))
      {    
		   printf("%d-%d-%d\t",q->info1.year,q->info1.month,q->info1.day);
			   printf("|收入\t|");
				printf("%s\t|",q->info1.name);
				printf("%s\t|",q->info1.money);	
			printf("%s|\n",q->info1.detail);
			money+=atoi(q->info1.money);
	   }
		q=q->next;
		count=1;
	}
		if(count==0)
	printf("抱歉，没有该姓名记录！\n");
  printf("该时间段的总收入为：%.2f元\n",name,money);
 
		
   }		
		


	}return money;//返回金额用于统计结余 先调用all(1)算出总收入 在调用all(-1)算出总支出 二者相减得结余 

	
}
