#include "head.h"
extern struct list1 *head;
extern struct list1 *outhead;
void show(int i)
{   
   printf("\n\n"); 
	int a=0,j=1;struct list1 *p1;
   if(i==1&&head==NULL)    {printf("                                    ���κμ�¼��\n");a=1;}
   if(i==-1&&outhead==NULL){printf("                                    ���κμ�¼��\n");a=1;}
	
	if(a==0)
	{
    if(i==1)p1=head->next;//����ͷ���Ϊ�սڵ�  ����ָ��ͷ������һ�ڵ� 
    if(i==-1)p1=outhead->next;
    printf("|NO.\t|��-��-��\t|����\t|����\t|���\t|��ע|\n"); 
	    while(p1!=NULL)
		{ 
		   printf("|%d\t|",j);
		   printf("%d-%d-%d\t",p1->info1.year,p1->info1.month,p1->info1.day);
			   if(i==1){printf("|����\t|");
				printf("%s\t|",p1->info1.name);
				printf("%s\t|",p1->info1.money);}
				if(i==-1){printf("|֧��\t|");
				printf("%s\t|",p1->info1.name);
				printf("%s\t|",p1->info1.outmoney);}	
			printf("%s|\n",p1->info1.detail);
			j++;
			p1=p1->next;		   
		}
	}	
}