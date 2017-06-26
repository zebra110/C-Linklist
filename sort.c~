#include "head.h"
extern struct list1 *head;
extern struct list1 *outhead;
extern h;
void sort(int i)
{	printf("\n\n");
   struct list1 *q,*p,*f,*temp,*m,*p1;
   m=head;
  int a=0,b,j,item,t;char ag;
  if(i==1&&head==NULL){printf("        \t无任何记录！\n");a=1;}
  if(i==-1&&outhead==NULL){printf("        \t无任何记录！\n");a=1;}
	if(a==0)   
	{
do{printf("                 ----------------------------------------------------\n");	
   printf("                                                                     \n");
   printf("                                    1.按日期排序                     \n");
   printf("                                                                     \n");
   printf("                                    2.按姓名排序                     \n");
   printf("                                                                     \n");
   printf("                                    3.按金额排序                      \n");
   printf("                                                                     \n");
   printf("                                    4.按备注排序                      \n");
   printf("                                                                     \n");
   printf("                 ----------------------------------------------------\n");
   printf("                                    请选择:");
   fflush(stdin);
	scanf("%d",&item);b=0; 
	if(i==1)q=head;
   if(i==-1)q=outhead;
	j=1;
 switch(item) 
 {	

case 1:
//冒泡排序  先判断年份 年份小的排前面 再判断月份和日期
 //如果年份排序正确  直接比较月份 以此类推 
 //如果没有交换位置要将 q=p进行下个位置的比较 否则中间会漏掉节点 
 //这方法比较笨 效率很低 但是比较好理解 (好吧其实是后面那种我不会） 


while(b<=h)
{        q=m;
		  while(q->next&&q->next->next)
		  {f=q;
		   p=q->next;
		   q=p->next;
		   if(p->info1.year>q->info1.year)
		   {
		 p->next=q->next;
		 q->next=p;
		 f->next=q;
		    }else q=p;
	   	}
	b++;
	}
	if(i==1)q=head;
   if(i==-1)q=outhead;
   b=0;
	while(b<=h)
	{q=m;
	  while(q->next&&q->next->next)
	  {f=q;
	   p=q->next;
	   q=p->next;
	if(p->info1.year==q->info1.year&&p->info1.month>q->info1.month)
	{
	 p->next=q->next;
	 q->next=p;
	 f->next=q;
	}else q=p; 
	}
	b++;
	} 
	
	if(i==1)q=head;
   if(i==-1)q=outhead;
   b=0;
	while(b<=h)
	{q=m;
	  while(q->next&&q->next->next)
	  {f=q;
	   p=q->next;
	   q=p->next; 
	
	if(p->info1.year==q->info1.year&&p->info1.month==q->info1.month&&p->info1.day>q->info1.day)
	{
	 p->next=q->next;
	 q->next=p;
	 f->next=q;
	}	else q=p; 
	}
	b++;
	}
	
	




/*
t=0;
	 while(b<=h)
{        
		  q=m;
		 while(q->next&&q->next->next)
		  {f=q;
		   p=q->next;
		   q=p->next;
		   if(p->info1.year>q->info1.year)
		   {
		 p->next=q->next;
		 q->next=p;
		 f->next=q;t=1; 
		    }
	else if(p->info1.year==q->info1.year)
			{    if(p->info1.month>q->info1.month)
					{
					 p->next=q->next;
					 q->next=p;
					 f->next=q;t=1;
					}
				else if(p->info1.month==q->info1.month)
		        	{
					if(p->info1.day>q->info1.day)
					{
						 p->next=q->next;
						 q->next=p;
						 f->next=q;t=1;
					}	
					
     			 }	
			}
		  if(t==0)q=p;
		  }
	b++;
	} */
	
	
   if(i==1)p1=head->next;
   if(i==-1)p1=outhead->next;	
   printf("|NO.\t|年-月-日\t|类型\t|姓名\t|金额\t|备注|\n"); 
	while(p1!=NULL)
	{ 
	   printf("|%d\t|",j);
	   printf("%d-%d-%d\t",p1->info1.year,p1->info1.month,p1->info1.day);
	   if(i==1)
		{printf("|收入\t|");
		printf("%s\t|",p1->info1.name);
		printf("%s\t|",p1->info1.money);
		}
		if(i==-1)
		{printf("|支出\t|");
		printf("%s\t|",p1->info1.name);
		printf("%s\t|",p1->info1.outmoney);
		}
		printf("%s|\n",p1->info1.detail);
		j++;
		p1=p1->next;		   
	}
 
	break;

 
case 2:
   while(b<=h)
	{
	q=m;
	while(q&&q->next&&q->next->next)
	{f=q;
	 p=q->next;
	 q=p->next;
	if(strcmp(p->info1.name,q->info1.name)>0)
	{
	p->next=q->next;
	q->next=p;
	f->next=q;
   }
   else q=p;
	}b++;
	}
   if(i==1)p1=head->next; 	
   if(i==-1)p1=outhead->next;
    printf("|NO.\t|年-月-日\t|类型\t|姓名\t|金额\t|备注|\n"); 
	while(p1!=NULL)
	{ 
	   printf("|%d\t|",j);
	   printf("%d-%d-%d\t",p1->info1.year,p1->info1.month,p1->info1.day);
	   if(i==1){printf("|收入\t|");
		printf("%s\t|",p1->info1.name);
		printf("%s\t|",p1->info1.money);}
		if(i==-1){printf("|支出\t|");
		printf("%s\t|",p1->info1.name);
		printf("%s\t|",p1->info1.outmoney);}
		printf("%s|\n",p1->info1.detail);
		j++;
		p1=p1->next;		   
	}
	break;
	
	case 3:
   while(b<=h)
	{
	q=m;
	while(q&&q->next&&q->next->next)
	{f=q;
	 p=q->next;
	 q=p->next;
	if(i==1)
	{if(atoi(p->info1.money)>atoi(q->info1.money))//先将金额由字符型转化为数值型再进行排序 
	{
	p->next=q->next;
	q->next=p;
	f->next=q;
   }
   else q=p;}
   
   if(i==-1)
	{if(atoi(p->info1.outmoney)>atoi(q->info1.outmoney))
	{
	p->next=q->next;
	q->next=p;
	f->next=q;
   }
   else q=p;}
   
	}b++;
	}
   if(i==1)p1=head->next; 	
   if(i==-1)p1=outhead->next;
   printf("|NO.\t|年-月-日\t|类型\t|姓名\t|金额\t|备注|\n"); 
	while(p1!=NULL)
	{ 
	   printf("|%d\t|",j);
	   printf("%d-%d-%d\t",p1->info1.year,p1->info1.month,p1->info1.day);
	   if(i==1){printf("|收入\t|");
		printf("%s\t|",p1->info1.name);
		printf("%s\t|",p1->info1.money);}
		if(i==-1){printf("|支出\t|");
		printf("%s\t|",p1->info1.name);
		printf("%s\t|",p1->info1.outmoney);}
		printf("%s|\n",p1->info1.detail);
		j++;
		p1=p1->next;		   
	}
	break;
	
	case 4:
	while(b<=h)
	{
	q=m;
	while(q&&q->next&&q->next->next)
	{f=q;
	 p=q->next;
	 q=p->next;
	if(strcmp(p->info1.detail,q->info1.detail)>0)
	{
	p->next=q->next;
	q->next=p;
	f->next=q;
   }
   else q=p;
	}b++;
	}
	if(i==1)p1=head->next; 	
   if(i==-1)p1=outhead->next;
   printf("|NO.\t|年-月-日\t|类型\t|姓名\t|金额\t|备注|\n"); 
	while(p1!=NULL)
	{ 
	   printf("|%d\t|",j);
	   printf("%d-%d-%d\t",p1->info1.year,p1->info1.month,p1->info1.day);
	   if(i==1){printf("|收入\t|");
		printf("%s\t|",p1->info1.name);
		printf("%s\t|",p1->info1.money);}
		if(i==-1){printf("|支出\t|");
		printf("%s\t|",p1->info1.name);
		printf("%s\t|",p1->info1.outmoney);}
		printf("%s|\n",p1->info1.detail);
		j++;
		p1=p1->next;		   
	}
	break;
}
printf("                       若继续排序'y'/'Y'");
fflush(stdin);
scanf("%c",&ag); 		
}while(ag=='y'||ag=='Y');
}
} 
