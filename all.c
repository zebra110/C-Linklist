#include "head.h"
extern struct list1 *head;
extern struct list1 *outhead;
float all(int i)
{ 
  float money=0;
  struct list1 *q;
  int count=0,year,month,day,year1,month1,day1,a=0;
  char name[20],detail[20];
  if(i==1&&head==NULL)    {printf("        \t���κμ�¼��\n");a=1;}
  if(i==-1&&outhead==NULL){printf("        \t���κμ�¼��\n");a=1;}
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
	if(i==-1)money+=atoi(q->info1.outmoney);//atoi�������ַ���ת��Ϊ������ ���ڽ��������ͳ��	
		q=q->next;
   } 
	if(i==1)printf("                     ������Ϊ:%.2fԪ\n",money);
   if(i==-1)printf("                     ��֧��Ϊ:%.2fԪ\n",money);
}	
   
	if(i==2||i==-2)
   { printf("�������ѯ�������գ����磺2005-02-21��:");
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
	printf("��Ǹ��û�и�����Ϣ��¼��\n");
	if(i==2)printf("%d-%d-%d������Ϊ:%.2fԪ\n",year,month,day,money);
    if(i==-2)printf("%d-%d-%d��֧��Ϊ:%.2fԪ\n",year,month,day,money);
		
   }
	
	
	if(i==3||i==-3)
   {
	printf("�������ѯ������:");
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
	printf("��Ǹ��û�и�������¼��\n");
	if(i==3)printf("��ͥ��Ա��%s��������Ϊ��%.2fԪ\n",name,money);
  if(i==-3)printf("��ͥ��Ա��%s����֧��Ϊ��%.2fԪ\n",name,money);
		
   }
	
		if(i==4||i==-4)
   {
	printf("�������ѯ������:");
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
	printf("��Ǹ��û�и�������¼��\n");
	if(i==4)printf("��ע��%s��������Ϊ��%.2fԪ\n",detail,money);
  if(i==-4)printf("��ע��%s����֧��Ϊ��%.2fԪ\n",detail,money);
		}
		
			if(i==5)
   {
	printf("�������ѯ����ֹ����:");
   fflush(stdin);
   scanf("%d-%d-%d-%d-%d-%d",&year,&month,&day,&year1,&month1,&day1);
    //scanf("%d",&year);
	q=head->next; 
	while(q!=NULL)
	{  if(((year==q->info1.year)||(year<q->info1.year))&&((month==q->info1.month)||(month<q->info1.month))&&((day==q->info1.day)||(day<q->info1.day)))
	if(((year1==q->info1.year)||(year1>q->info1.year))&&((month1==q->info1.month)||(month1>q->info1.month))&&((day1==q->info1.day)||(day1>q->info1.day)))
      {    
		   printf("%d-%d-%d\t",q->info1.year,q->info1.month,q->info1.day);
			   printf("|����\t|");
				printf("%s\t|",q->info1.name);
				printf("%s\t|",q->info1.money);	
			printf("%s|\n",q->info1.detail);
			money+=atoi(q->info1.money);
	   }
		q=q->next;
		count=1;
	}
		if(count==0)
	printf("��Ǹ��û�и�������¼��\n");
  printf("��ʱ��ε�������Ϊ��%.2fԪ\n",name,money);
 
		
   }		
		


	}return money;//���ؽ������ͳ�ƽ��� �ȵ���all(1)��������� �ڵ���all(-1)�����֧�� ��������ý��� 

	
}
