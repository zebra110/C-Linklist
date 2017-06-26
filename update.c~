#include "head.h"
extern struct list1 *head;
extern struct list1 *outhead;
void update(int i)
{  
   printf("\n\n");
   struct list1 *q=NULL;  
	int j,m,a=0,year,month,day,count,item,itemm,x=0;
	char ag,name[2],money[20],detail[20];
	
   if(i==1&&head==NULL)    {printf("        \t无任何记录！\n");a=1;}
   if(i==-1&&outhead==NULL){printf("        \t无任何记录！\n");a=1;}
	
	if(a==0) 
{ 
do{
   printf("                 ----------------------------------------------------\n");	
   printf("                                                                     \n");
   printf("                                    1.按日期修改                     \n");
   printf("                                                                     \n");
   printf("                                    2.按姓名修改                     \n");
   printf("                                                                     \n");
   printf("                                    3.按金额修改                     \n");
   printf("                                                                     \n");
   printf("                                    4.按备注修改                     \n");
   printf("                                                                     \n");
   printf("                 ----------------------------------------------------\n");
   printf("                                    请选择:");
   fflush(stdin);
	scanf("%d",&item);
	j=1;
	if(i==1)q=head->next;
   if(i==-1)q=outhead->next;
	count=0;
	 switch(item)
 {
	case 1: 
	printf("\n\n");
	printf("                       请输入要修改信息的日期（例如：2005-02-21）:");
	fflush(stdin);
   scanf("%d-%d-%d",&year,&month,&day);
	printf("|NO.\t|年-月-日\t|类型\t|姓名\t|金额\t|备注|\n");
	while(q!=NULL)
	{  if(q->info1.year==year&&q->info1.month==month&&q->info1.day==day)
	  {
  		q->info1.arrange=j;//将j的值赋给q->info1.arrange 方便之后找到要修改的那个节点 
	   printf("\n");
	   printf("|%d\t|",q->info1.arrange);
	   printf("%d-%d-%d\t",q->info1.year,q->info1.month,q->info1.day);
		if(i==1)
		{
		   printf("|收入\t|");
		   printf("%s\t|",q->info1.name);
		   printf("%s\t|",q->info1.money);
		}
		if(i==-1)
		{
		   printf("|支出\t|");
		   printf("%s\t|",q->info1.name);
		   printf("%s\t|",q->info1.outmoney);
		}
		printf("%s|\n",q->info1.detail);
		j++;
		count=1;}
		q=q->next;
	} 
	if(count==0)
	printf("                                    抱歉，没有该日的财务记录！\n"); 
	if(count==1)
	{printf("                                    请输入要修改的编号：");
	 scanf("%d",&m);	 
    printf("\n\n");
   if(i==1)q=head->next;
   if(i==-1)q=outhead->next;
   while(q!=NULL)
      {
		   if(m==q->info1.arrange)
		   {x=1;  
	printf("                                                                     \n");
   printf("                                    1.修改日期                       \n");
   printf("                                                                     \n");
   printf("                                    2.修改姓名                       \n");
   printf("                                                                     \n");
   printf("                                    2.修改金额                       \n");
   printf("                                                                     \n");
   printf("                                    4.修改备注                       \n");
  	printf("                                                                     \n");
   fflush(stdin);
  	printf("                                    请选择："); 
   scanf("%d",&itemm); 
   printf("\n");
   switch(itemm)
   {   
           case 1:
            printf("                       请输入新的日期（如：2005-02-21）:");
            fflush(stdin);
            scanf("%d-%d-%d",&q->info1.year,&q->info1.month,&q->info1.day);
            printf("\n\n");
            printf("                                    修改成功\n");
	         printf("\n\n");
            break;
			
  	        case 2:
	         printf("                                    请输入新的姓名:");
	         scanf("%s",q->info1.name);
				printf("\n\n");
		      printf("修改成功\n");
				printf("\n\n");
				break;
				
				case 3:
				printf("                                    请输入新的金额:");
   	      if(i==1)
				scanf("%s",q->info1.money);            
				if(i==-1)
				scanf("%s",q->info1.outmoney);
				printf("\n\n");
            printf("                                    修改成功\n");
				printf("\n\n");
            break;
			
				case 4:
				printf("                                    请输入新的备注:");
	         scanf("%s",q->info1.detail);
				printf("\n\n");
		      printf("修改成功\n");
				printf("\n\n");
			   break;
				 
			   default:printf("                                    请在1-3之间选择！\n");
            }         
			   if(x==0)printf("                                    该编号不存在\n");
    }
		   q=q->next;
	}
}break;
		
	case 2: 
	printf("                                    请输入要修改信息的姓名:");
	fflush(stdin);
   scanf("%s",name);printf("\n\n");
	printf("|NO.\t|年-月-日\t|类型\t|姓名\t|金额\t|备注|\n");
	while(q!=NULL)
	{ 
	   if(strcmp(q->info1.name,name)==0)
      {
		q->info1.arrange=j;
	   printf("\n");
	   printf("|%d\t|",q->info1.arrange);
	   printf("%d-%d-%d\t",q->info1.year,q->info1.month,q->info1.day);
		if(i==1){printf("|收入\t|");
		printf("%s\t|",q->info1.name);
		printf("%s\t|",q->info1.money);}
		if(i==-1){printf("|支出\t|");
		printf("%s\t|",q->info1.name);
		printf("%s\t|",q->info1.outmoney);}
		printf("%s|\n",q->info1.detail);
		j++;count=1;}
		q=q->next;
		
	} 
	if(count==0)
	printf("                                    抱歉，没有该成员的财务记录！\n"); 
	if(count==1)
	{printf("                                    请输入要修改的编号：");
	scanf("%d",&m);
	  if(i==1)q=head->next;
     if(i==-1)q=outhead->next;
      while(q!=NULL)
      { if(m==q->info1.arrange)
		   { 	x=1;	   
	printf("                                                                     \n");
   printf("                                    1.修改日期                       \n");
   printf("                                                                     \n");
   printf("                                    2.修改姓名                       \n");
   printf("                                                                     \n");
   printf("                                    2.修改金额                       \n");
   printf("                                                                     \n");
   printf("                                    4.修改备注                       \n");
  	printf("                                                                     \n");
   fflush(stdin);
  	printf("                                    请选择："); 
   scanf("%d",&itemm); 
   printf("\n");
   switch(itemm)
   {   
           case 1:
            printf("                       请输入新的日期（如：2005-02-21）:");
            fflush(stdin);
            scanf("%d-%d-%d",&q->info1.year,&q->info1.month,&q->info1.day);
            printf("\n\n");
            printf("                                    修改成功\n");
	         printf("\n\n");
            break;
			
  	        case 2:
	         printf("                                    请输入新的姓名:");
	         scanf("%s",q->info1.name);
				printf("\n\n");
		      printf("修改成功\n");
				printf("\n\n");
				break;
				
				case 3:
				printf("                                    请输入新的金额:");
   	      if(i==1)
				scanf("%s",q->info1.money);            
				if(i==-1)
				scanf("%s",q->info1.outmoney);
				printf("\n\n");
            printf("                                    修改成功\n");
				printf("\n\n");
            break;
			
				case 4:
				printf("                                    请输入新的备注:");
	         scanf("%s",q->info1.detail);
				printf("\n\n");
		      printf("修改成功\n");
				printf("\n\n");
			   break;
				 
			   default:printf("                                    请在1-3之间选择！\n");
            }         
			   if(x==0)printf("                                    该编号不存在\n");
    }
		   q=q->next;
	}
}break;
		   
	case 3:
	printf("                                    请输入姓名:");
	fflush(stdin);
   scanf("%s",money); printf("\n\n");
	printf("|NO.\t|年-月-日\t|类型\t|姓名\t|金额\t|备注|\n");
	while(q!=NULL)
	{ 
	   if(strcmp(q->info1.money,money)==0)
      {
		q->info1.arrange=j;
	   printf("\n");
	   printf("|%d\t|",q->info1.arrange);
	   printf("%d-%d-%d\t",q->info1.year,q->info1.month,q->info1.day);
		if(i==1){printf("|收入\t|");
		printf("%s\t|",q->info1.name);
		printf("%s\t|",q->info1.money);}
		if(i==-1){printf("|支出\t|");
		printf("%s\t|",q->info1.name);
		printf("%s\t|",q->info1.outmoney);}
		printf("%s|\n",q->info1.detail);
		j++;count=1;}
		q=q->next;
		
	} 
	if(count==0)
	printf("                                    抱歉，没有该成员的财务记录！\n"); 
	if(count==1)
	{printf("                                    请输入要修改的编号：");
	scanf("%d",&m); 
	    printf("\n\n");
		 if(i==1)q=head->next;
   if(i==-1)q=outhead->next;
      while(q!=NULL)
      {
		   if(m==q->info1.arrange)
		   { 	x=1;	   
	printf("                                                                     \n");
   printf("                                    1.修改日期                       \n");
   printf("                                                                     \n");
   printf("                                    2.修改姓名                       \n");
   printf("                                                                     \n");
   printf("                                    2.修改金额                       \n");
   printf("                                                                     \n");
   printf("                                    4.修改备注                       \n");
  	printf("                                                                     \n");
   fflush(stdin);
  	printf("                                    请选择："); 
   scanf("%d",&itemm); 
   printf("\n");
   switch(itemm)
   {   
           case 1:
            printf("                       请输入新的日期（如：2005-02-21）:");
            fflush(stdin);
            scanf("%d-%d-%d",&q->info1.year,&q->info1.month,&q->info1.day);
            printf("\n\n");
            printf("                                    修改成功\n");
	         printf("\n\n");
            break;
			
  	        case 2:
	         printf("                                    请输入新的姓名:");
	         scanf("%s",q->info1.name);
				printf("\n\n");
		      printf("修改成功\n");
				printf("\n\n");
				break;
				
				case 3:
				printf("                                    请输入新的金额:");
   	      if(i==1)
				scanf("%s",q->info1.money);            
				if(i==-1)
				scanf("%s",q->info1.outmoney);
				printf("\n\n");
            printf("                                    修改成功\n");
				printf("\n\n");
            break;
			
				case 4:
				printf("                                    请输入新的备注:");
	         scanf("%s",q->info1.detail);
				printf("\n\n");
		      printf("修改成功\n");
				printf("\n\n");
			   break;
				 
			   default:printf("                                    请在1-3之间选择！\n");
            }         
			   if(x==0)printf("                                    该编号不存在\n");
    }
		   q=q->next;
	}
}break;
	
	case 4:
	printf("                                    请输入备注:");
	fflush(stdin);
   scanf("%s",detail); printf("\n\n");
	printf("|NO.\t|年-月-日\t|类型\t|姓名\t|金额\t|备注|\n");
	while(q!=NULL)
	{ 
	   if(strcmp(q->info1.detail,detail)==0)
      {
		q->info1.arrange=j;
	   printf("\n");
	   printf("|%d\t|",q->info1.arrange);
	   printf("%d-%d-%d\t",q->info1.year,q->info1.month,q->info1.day);
		if(i==1){printf("|收入\t|");
		printf("%s\t|",q->info1.name);
		printf("%s\t|",q->info1.money);}
		if(i==-1){printf("|支出\t|");
		printf("%s\t|",q->info1.name);
		printf("%s\t|",q->info1.outmoney);}
		printf("%s|\n",q->info1.detail);
		j++;count=1;}
		q=q->next;
		
	} 
	if(count==0)
	printf("                                    抱歉，没有该成员的财务记录！\n"); 
	if(count==1)
	{printf("                                    请输入要修改的编号：");
	scanf("%d",&m);
	   printf("\n\n"); 
		if(i==1)q=head->next;
   if(i==-1)q=outhead->next;
      while(q!=NULL)
      {
		   if(m==q->info1.arrange)
		   { 	x=1;	   
	printf("                                                                     \n");
   printf("                                    1.修改日期                       \n");
   printf("                                                                     \n");
   printf("                                    2.修改姓名                       \n");
   printf("                                                                     \n");
   printf("                                    2.修改金额                       \n");
   printf("                                                                     \n");
   printf("                                    4.修改备注                       \n");
  	printf("                                                                     \n");
   fflush(stdin);
  	printf("                                    请选择："); 
   scanf("%d",&itemm); 
   printf("\n");
   switch(itemm)
   {   
           case 1:
            printf("                       请输入新的日期（如：2005-02-21）:");
            fflush(stdin);
            scanf("%d-%d-%d",&q->info1.year,&q->info1.month,&q->info1.day);
            printf("\n\n");
            printf("                                    修改成功\n");
	         printf("\n\n");
            break;
			
  	        case 2:
	         printf("                                    请输入新的姓名:");
	         scanf("%s",q->info1.name);
				printf("\n\n");
		      printf("修改成功\n");
				printf("\n\n");
				break;
				
				case 3:
				printf("                                    请输入新的金额:");
   	      if(i==1)
				scanf("%s",q->info1.money);            
				if(i==-1)
				scanf("%s",q->info1.outmoney);
				printf("\n\n");
            printf("                                    修改成功\n");
				printf("\n\n");
            break;
			
				case 4:
				printf("                                    请输入新的备注:");
	         scanf("%s",q->info1.detail);
				printf("\n\n");
		      printf("修改成功\n");
				printf("\n\n");
			   break;
				 
			   default:printf("                                    请在1-3之间选择！\n");
            }         
			   if(x==0)printf("                                    该编号不存在\n");
    }
		   q=q->next;
	}
}break;

	default:printf("                                    请在1-4之间选择！\n");
 
 }
	printf("                                   若继续修改 'y'/'Y'");
fflush(stdin);
scanf("%c",&ag); 		
}while(ag=='y'||ag=='Y');  
}}
