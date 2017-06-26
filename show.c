#include "head.h"
extern struct list1 *head;
extern struct list1 *outhead;
void show(int i)
{   
   printf("\n\n"); 
	int a=0,j=1;struct list1 *p1;
   if(i==1&&head==NULL)    {printf("                                    无任何记录！\n");a=1;}
   if(i==-1&&outhead==NULL){printf("                                    无任何记录！\n");a=1;}
	
	if(a==0)
	{
    if(i==1)p1=head->next;//由于头结点为空节点  所以指向头结点的下一节点 
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
	}	
}