#include "head.h"
extern struct list1 *head;
extern struct list1 *rear;
extern struct list1 *outhead;
extern struct list1 *outrear;
void add(int i)
{   
    char ag,ch;
	 struct list1 *p1; 
    do
    {   printf("\n\n");
        p1=(struct list1*)malloc(sizeof(struct list1));
        
        time_t rawtime; 
        struct tm * timeinfo;  
        time ( &rawtime );  
        timeinfo = localtime (&rawtime);  
        p1->info1.year=timeinfo->tm_year+1900;
        p1->info1.month=timeinfo->tm_mon+1;
        p1->info1.day=timeinfo->tm_mday;//用时间函数调用系统日期 
	  
	printf("                                    日期：%d-%d-%d\n\n",p1->info1.year,p1->info1.month,p1->info1.day);
	printf("                                    若修改日期 'y'/'Y'\n                                    ");
	fflush(stdin);
   ch=getchar();	
	if(ch=='y')
	{printf("                                    请输入日期 格式如:2001-1-1\n                                    ");
	scanf("%d-%d-%d",&p1->info1.year,&p1->info1.month,&p1->info1.day);}
	printf("                                    请输入家庭成员姓名\n                                    ");             
	fflush(stdin);
	scanf("%s",p1->info1.name);
	
if(i==1)
{
	 printf("                                    请输入收入金额\n                                    ");
	 fflush(stdin);
	 scanf("%s",p1->info1.money);
}	
   if(i==-1)
{  
   printf("                                    请输入支出金额\n                                    ");
	fflush(stdin);
	scanf("%s",p1->info1.outmoney);
}
	printf("                                    请输入备注\n                                    ");
	fflush(stdin);
	scanf("%s",p1->info1.detail);

	if(i==1)
	{
	if(head==NULL)
	{head=(struct list1*)malloc(sizeof(struct list1));	
	head->next=p1;//头结点为空节点便于之后的删除操作  创建链表使用尾插法 
	rear=p1;
	}
	else
   {rear->next=p1;
	rear=p1;}
   rear->next=NULL;
	}

if(i==-1)
	{if(outhead==NULL)
	{outhead=(struct list1*)malloc(sizeof(struct list1));	
	outhead->next=p1;
	outrear=p1;
	}
	else
   {outrear->next=p1;
	outrear=p1;}
   outrear->next=NULL;
	}
   
   printf("                                    若继续添加 'y'/'Y'");
	fflush(stdin);
	scanf("%c",&ag); 		
}while(ag=='y'||ag=='Y'); 
}