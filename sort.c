#include "head.h"
extern struct list1 *head;
extern struct list1 *outhead;
extern h;
void sort(int i)
{	printf("\n\n");
   struct list1 *q,*p,*f,*temp,*m,*p1;
   m=head;
  int a=0,b,j,item,t;char ag;
  if(i==1&&head==NULL){printf("        \t���κμ�¼��\n");a=1;}
  if(i==-1&&outhead==NULL){printf("        \t���κμ�¼��\n");a=1;}
	if(a==0)   
	{
do{printf("                 ----------------------------------------------------\n");	
   printf("                                                                     \n");
   printf("                                    1.����������                     \n");
   printf("                                                                     \n");
   printf("                                    2.����������                     \n");
   printf("                                                                     \n");
   printf("                                    3.���������                      \n");
   printf("                                                                     \n");
   printf("                                    4.����ע����                      \n");
   printf("                                                                     \n");
   printf("                 ----------------------------------------------------\n");
   printf("                                    ��ѡ��:");
   fflush(stdin);
	scanf("%d",&item);b=0; 
	if(i==1)q=head;
   if(i==-1)q=outhead;
	j=1;
 switch(item) 
 {	

case 1:
//ð������  ���ж���� ���С����ǰ�� ���ж��·ݺ�����
 //������������ȷ  ֱ�ӱȽ��·� �Դ����� 
 //���û�н���λ��Ҫ�� q=p�����¸�λ�õıȽ� �����м��©���ڵ� 
 //�ⷽ���Ƚϱ� Ч�ʺܵ� ���ǱȽϺ���� (�ð���ʵ�Ǻ��������Ҳ��ᣩ 


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
   printf("|NO.\t|��-��-��\t|����\t|����\t|���\t|��ע|\n"); 
	while(p1!=NULL)
	{ 
	   printf("|%d\t|",j);
	   printf("%d-%d-%d\t",p1->info1.year,p1->info1.month,p1->info1.day);
	   if(i==1)
		{printf("|����\t|");
		printf("%s\t|",p1->info1.name);
		printf("%s\t|",p1->info1.money);
		}
		if(i==-1)
		{printf("|֧��\t|");
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
	{if(atoi(p->info1.money)>atoi(q->info1.money))//�Ƚ�������ַ���ת��Ϊ��ֵ���ٽ������� 
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
	break;
}
printf("                       ����������'y'/'Y'");
fflush(stdin);
scanf("%c",&ag); 		
}while(ag=='y'||ag=='Y');
}
} 
