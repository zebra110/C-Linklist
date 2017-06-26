#include "head.h"
extern struct list1 *head;
extern struct list1 *outhead;
void search(int i)
{  
   printf("\n\n");
   char s1[20],name[2],money[20],detail[20];
   struct list1 *q=NULL;
   char ag;
	int year,month,day,count=0,item,j=0,k,g,a=0,ii;
	
   if(i==1&&head==NULL)    {printf("        \t无任何记录！\n");a=1;}
   if(i==-1&&outhead==NULL){printf("        \t无任何记录！\n");a=1;}
   
	if(a==0)   
	{
   do{printf("                 ----------------------------------------------------\n");	
   printf("                                                                     \n");
   printf("                                    1.按日期查询                     \n");
   printf("                                                                     \n");
   printf("                                    2.按姓名查询                     \n");
   printf("                                                                     \n");
   printf("                                    3.按金额查询                      \n");
   printf("                                                                     \n");
   printf("                                    4.按备注查询                      \n");
   printf("                                                                     \n");
   printf("                                    5.模糊查找                     \n");
   printf("                                                                     \n");
   printf("                 ----------------------------------------------------\n");
   printf("                                    请选择:");
   fflush(stdin);
	scanf("%d",&item);
	g=1;//g为编号 
   if(i==1)q=head->next;
   if(i==-1)q=outhead->next;
	count=0;
	switch(item)
 {
	 case 1:
	 printf("                     请输入查询的年月日（如：2005-02-21）:");
    fflush(stdin);
    scanf("%d-%d-%d",&year,&month,&day); printf("\n");
	 printf("|NO.\t|年-月-日\t|类型\t|姓名\t|金额\t|备注|\n");
	while(q!=NULL)
	{  if(q->info1.year==year&&q->info1.month==month&&q->info1.day==day)
	   {printf("|%d\t|",g);
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
		g++;count=1;}
		q=q->next;
		
	}
	if(count==0)
	printf("                     抱歉，没有该日信息记录！\n");break;
	
	case 2:
	printf("                     请输入查询的姓名:");
   fflush(stdin);
   scanf("%s",name);printf("\n");
	printf("|NO.\t|年-月-日\t|类型\t|姓名\t|金额\t|备注|\n");
	while(q!=NULL)
	{  
	   if(strcmp(q->info1.name,name)==0)
      {
	      printf("|%d\t|",g);
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
         g++;
		}
		q=q->next;
		count=1;
	}
	if(count==0)
	printf("                     抱歉，没有该姓名记录！\n");break;
	
	case 3:
	printf("                     请输入查询的金额:");
   fflush(stdin);
   scanf("%s",money);printf("\n");
	printf("|NO.\t|年-月-日\t|类型\t|姓名\t|金额\t|备注|\n");
	while(q!=NULL)
	{  
	   if(strcmp(q->info1.money,money)==0)
      {
	     printf("|%d\t|",g);
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
		g++;
	   }
		q=q->next;
		count=1;
	}
	if(count==0)
	printf("                     抱歉，没有该金额记录！\n");break;
	
	case 4:
	printf("                     请输入查询的备注:");
   fflush(stdin);
   scanf("%s",detail);printf("\n");
	printf("|NO.\t|年-月-日\t|类型\t|姓名\t|金额\t|备注|\n");
	while(q!=NULL)
	{  
	   if(strcmp(q->info1.detail,detail)==0)
      {
	     printf("|%d\t|",g);
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
		g++;
		}
		q=q->next;
		count=1;
	}
	if(count==0)
	printf("                     抱歉，没有该备注记录！\n");break;
	
	case 5:
	printf("                     请输入查询关键字：");
   scanf("%s",s1); printf("\n");
	while(q)
   {
     for(k=0,j=0;q->info1.name[k]!='\0'&&s1[j]!='\0';)
     {
     if(q->info1.name[k]==s1[j]||q->info1.detail[k]==s1[j]||q->info1.money[k]==s1[j])
	  {
	    k++;
	    j++;
	  }
     else 
	  {
	    k=k-j+1;
	    j=0;
	  }//从第一个元素开始比较 比较到'\0' 若中间有一个元素不同 j归零 重新比较 
     } 
     if(q->info1.year==atoi(s1)||q->info1.month==atoi(s1)||q->info1.day==atoi(s1)||s1[j]=='\0')
  
/*
	while(q)
{
	if(strstr((q->info1.name),s1)||strstr((q->info1.money),s1)||strstr((q->info1.outmoney),s1)||strstr((q->info1.detail),s1)||strstr((q->info1.detail),s1)||q->info1.year==atoi(s1)||q->info1.month==atoi(s1)||q->info1.day==atoi(s1))
*/     {
	     count=1;
		  printf("|NO.\t|年-月-日\t|类型\t|姓名\t|金额\t|备注|\n");
        printf("|%d\t|",g);
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
		g++;
     } q=q->next;
 }
	  //用count的值来判断是否进行了上一步操作 也就是是否有关键字被找出 
    if(count==0)        					
    printf("                     该关键字不存在！\n");break;	           
    default:printf("                     请在1-5之间选择！\n\n");
    }
    printf("                                    若继续查询'y'/'Y'");
    fflush(stdin);
    scanf("%c",&ag); 		
    }while(ag=='y'||ag=='Y'); 
}}
