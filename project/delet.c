#include "head.h"
extern struct list1 *head;
extern struct list1 *outhead;
extern s[20];
extern h;
void delet(int i)
{    
   printf("\n\n");
	struct list1 *q,*p;
	int a=0,year,month,day,j,m[20],count,item,itemm,x=0,num,ii;
	char ag,name[2],money[20],detail[20],file[20];
   
  if(i==1&&head==NULL)    {printf("        \t无任何记录！\n");a=1;}
  if(i==-1&&outhead==NULL){printf("        \t无任何记录！\n");a=1;}

  if(a==0)
{
	do{
	printf("                 ----------------------------------------------------\n");	
   printf("                                                                     \n");
   printf("                                    1.按日期删除                     \n");
   printf("                                                                     \n");
   printf("                                    2.按姓名删除                     \n");
   printf("                                                                     \n");
   printf("                                    3.按金额删除                     \n");
   printf("                                                                     \n");
   printf("                                    4.按备注删除                     \n");
   printf("                                                                     \n");
   printf("                                    5.一键删除所有记录               \n");
   printf("                                                                     \n");
   printf("                 ----------------------------------------------------\n");
   printf("                                    请选择:");
   fflush(stdin);
	scanf("%d",&item);
	printf("\n");
   if(i==1)q=head->next;
   if(i==-1)q=outhead->next;
	 count=0;j=1;
	 switch(item)
 {
	case 1:
	printf("          请输入要删除信息的日期（格式：2005-02-21）:");
	fflush(stdin);
   scanf("%d-%d-%d",&year,&month,&day);
	printf("          |NO.\t|年-月-日\t|类型\t|姓名\t|金额\t|备注|\n\n");
	while(q!=NULL)
	{  if(q->info1.year==year&&q->info1.month==month&&q->info1.day==day)
	   {
		q->info1.arrange=j;//将j的值赋给q->info1.arrange 方便之后找到要删除的那个节点 
	   printf("\n");
	   printf("          |%d\t|",q->info1.arrange);
	   printf("%d-%d-%d\t",q->info1.year,q->info1.month,q->info1.day);
		if(i==1){printf("|收入\t|");
		printf("%s\t|",q->info1.name);
		printf("%s\t|",q->info1.money);}
		if(i==-1){printf("|支出\t|");
		printf("%s\t|",q->info1.name);
		printf("%s\t|",q->info1.outmoney);}
		printf("%s|\n\n",q->info1.detail);
		j++;
		count=1;
		}
		q=q->next;
	} 
	if(count==0)
	printf("          抱歉，没有该日的财务记录！\n"); 	
	if(count==1)
	{ if(j==2)
	{num=1;
		m[0]=1;
	}
	if(j>2)
	 {
 		
 	  printf("          请输入要删除的数量：");
	  scanf("%d",&num);  if(num>j)printf("删除的数量超过可删除数量！");
	  printf("          请输入要删除的编号：");
	  for(ii=0;ii<num;ii++) 
	  {scanf("%d",&m[ii]);//用数组m记录下要删除的编号 与之后的q->info1.arrange去匹配 找出要删除的节点 
	  printf("\n          ");}
	  
	  }
	  ii=0;
	while(ii<num)//循环进行的次数为要删除数量的次数 
   { 
	if(m[ii]<j)
	    {if(i==1)q=head;
        if(i==-1)q=outhead;
      while(q!=NULL)
      {  p=q;
         q=q->next;
		   if(m[ii]==q->info1.arrange)//节点编号与m数组中所记录的编号值相同 则进行删除操作 
		   {
			   
				p->next=q->next;//由于头结点为空 无需考虑要删除的节点为头结点的情况 
		      FILE *fp;
		      if(i==1)sprintf(file,"%s.收入回收站.TXT",s);
	         if(i==-1)sprintf(file,"%s.支出回收站.TXT",s);
            fp=fopen(file,"a+");
	         fwrite(&q->info1,sizeof(struct family),1,fp);
	         fclose(fp);//将该节点数据保存到 该用户对应的回收站文件中 
		      
	       	break;
		  }
	  }}ii++;
   }
	
	
	
	}        printf("          删除成功\n");
		      printf("          温馨提示：如果误删信息可以去回收站找\n");
		break; 


case 2:
	printf("          请输入要删除信息的姓名:");
	fflush(stdin);
   scanf("%s",name);
   printf("\n");
	printf("          |NO.\t|年-月-日\t|类型\t|姓名\t|金额\t|备注|\n\n");
	while(q!=NULL)
	{   
	if(strcmp(q->info1.name,name)==0)
      {
		q->info1.arrange=j;
	   printf("          |%d\t|",q->info1.arrange);
	   printf("%d-%d-%d\t",q->info1.year,q->info1.month,q->info1.day);
		if(i==1)
		{printf("|收入\t|");
		printf("%s\t|",q->info1.name);
		printf("%s\t|",q->info1.money);
		}
		if(i==-1)
		{printf("|支出\t|");
		printf("%s\t|",q->info1.name);
		printf("%s\t|",q->info1.outmoney);
		}
		printf("%s|\n\n",q->info1.detail);
		j++;
		count=1;
		}	
		q=q->next;
		
		
	} 
	if(count==0)
	printf("          抱歉，没有该姓名的财务记录！\n"); 
	if(count==1)
{ if(j==2)
	{num=1;
		m[0]=1;
	}
	if(j>2)
	 {
 		
 	  printf("          请输入要删除的数量：");
	  scanf("%d",&num);  if(num>j)printf("删除的数量超过可删除数量！");
	  printf("          请输入要删除的编号：");
	  for(ii=0;ii<num;ii++) 
	  {scanf("%d",&m[ii]);//用数组m记录下要删除的编号 与之后的q->info1.arrange去匹配 找出要删除的节点 
	  printf("\n          ");}
	  
	  }
	  ii=0;
	while(ii<num)
   { if(m[ii]<j)
	    {if(i==1)q=head;
        if(i==-1)q=outhead;
      while(q!=NULL)
      {  p=q;
         q=q->next;
		   if(m[ii]==q->info1.arrange)
		   {
			   
				p->next=q->next;
		      FILE *fp;
		      if(i==1)sprintf(file,"%s.收入回收站.TXT",s);
	         if(i==-1)sprintf(file,"%s.支出回收站.TXT",s);
            fp=fopen(file,"a+");
	         fwrite(&q->info1,sizeof(struct family),1,fp);
	         fclose(fp);
		      
	       	break;
		  }
	  }}ii++;
   }
	
	
	
	}        printf("          删除成功\n");
		      printf("          温馨提示：如果误删信息可以去回收站找\n");
		break; 
		
		
case 3:
	printf("          请输入要删除信息的金额:");
	fflush(stdin);
   scanf("%s",money);
   printf("\n");
	printf("          |NO.\t|年-月-日\t|类型\t|姓名\t|金额\t|备注|\n\n");
	while(q!=NULL)
	{  if(strcmp(q->info1.money,money)==0)
    {  q->info1.arrange=j;
	   printf("          |%d\t|",q->info1.arrange);
	   printf("%d-%d-%d\t",q->info1.year,q->info1.month,q->info1.day);
		if(i==1)
		{printf("|收入\t|");
		printf("%s\t|",q->info1.name);
		printf("%s\t|",q->info1.money);
		}
		if(i==-1)
		{printf("|支出\t|");
		printf("%s\t|",q->info1.name);
		printf("%s\t|",q->info1.outmoney);
		}
		printf("%s|\n\n",q->info1.detail);
		j++;
		count=1;
		}	
		q=q->next;
	} 
	if(count==0)
	printf("          抱歉，没有该金额的财务记录！\n"); 
	{ if(j==2)
	{num=1;
		m[0]=1;
	}
	if(j>2)
	 {
 		
 	  printf("          请输入要删除的数量：");
	  scanf("%d",&num);  if(num>j)printf("删除的数量超过可删除数量！");
	  printf("          请输入要删除的编号：");
	  for(ii=0;ii<num;ii++) 
	  {scanf("%d",&m[ii]);//用数组m记录下要删除的编号 与之后的q->info1.arrange去匹配 找出要删除的节点 
	  printf("\n          ");}
	  
	  }
	  ii=0;
	while(ii<num)
   { if(m[ii]<j)
	    {if(i==1)q=head;
        if(i==-1)q=outhead;
      while(q!=NULL)
      {  p=q;
         q=q->next;
		   if(m[ii]==q->info1.arrange)
		   {
			   
				p->next=q->next;
		      FILE *fp;
		      if(i==1)sprintf(file,"%s.收入回收站.TXT",s);
	         if(i==-1)sprintf(file,"%s.支出回收站.TXT",s);
            fp=fopen(file,"a+");
	         fwrite(&q->info1,sizeof(struct family),1,fp);
	         fclose(fp);
		      
	       	break;
		  }
	  }}ii++;
   }
	
	
	
	}        printf("          删除成功\n");
		      printf("          温馨提示：如果误删信息可以去回收站找\n");
		break; 
		
case 4:
	printf("          请输入要删除信息的备注:");
	fflush(stdin);
   scanf("%s",detail);
   printf("\n");
	printf("          |NO.\t|年-月-日\t|类型\t|姓名\t|金额\t|备注|\n\n");
	while(q!=NULL)
	{ printf("\n"); 
	if(strcmp(q->info1.detail,detail)==0)
      {
	   q->info1.arrange=j;
	   printf("          |%d\t|",q->info1.arrange);
	   printf("%d-%d-%d\t",q->info1.year,q->info1.month,q->info1.day);
		if(i==1)
		{printf("|收入\t|");
		printf("%s\t|",q->info1.name);
		printf("%s\t|",q->info1.money);
		}
		if(i==-1)
		{printf("|支出\t|");
		printf("%s\t|",q->info1.name);
		printf("%s\t|",q->info1.outmoney);
		}
		printf("%s|\n\n",q->info1.detail);
		j++;
		count=1;
		}	
		q=q->next;
		
	} 
	if(count==0)
	printf("          抱歉，没有该备注的财务记录！\n"); 
	{ if(j==2)
	{num=1;
		m[0]=1;
	}
	if(j>2)
	 {
 		
 	  printf("          请输入要删除的数量：");
	  scanf("%d",&num);  if(num>j)printf("删除的数量超过可删除数量！");
	  printf("          请输入要删除的编号：");
	  for(ii=0;ii<num;ii++) 
	  {scanf("%d",&m[ii]);//用数组m记录下要删除的编号 与之后的q->info1.arrange去匹配 找出要删除的节点 
	  printf("\n          ");}
	  
	  }
	  ii=0;
	while(ii<num)
   { if(m[ii]<j)
	    {if(i==1)q=head;
        if(i==-1)q=outhead;
      while(q!=NULL)
      {  p=q;
         q=q->next;
		   if(m[ii]==q->info1.arrange)
		   {
			   
				p->next=q->next;
		      FILE *fp;
		      if(i==1)sprintf(file,"%s.收入回收站.TXT",s);
	         if(i==-1)sprintf(file,"%s.支出回收站.TXT",s);
            fp=fopen(file,"a+");
	         fwrite(&q->info1,sizeof(struct family),1,fp);
	         fclose(fp);
		      
	       	break;
		  }
	  }}ii++;
   }
	
	
	
	}        printf("          删除成功\n");
		      printf("          温馨提示：如果误删信息可以去回收站找\n");
		break; 
		
		case 5:
		if(i==1)q=head->next;
      if(i==-1)q=outhead->next;
   
	FILE *fp;
	if(i==1)sprintf(file,"%s.收入回收站.TXT",s);
	if(i==-1)sprintf(file,"%s.支出回收站.TXT",s);
	fp=fopen(file,"wb+");
	
	while(q!=NULL) 
		{
			fwrite(&q->info1,sizeof(struct family),1,fp);
			q=q->next;
		}
	fclose(fp);
	// 由于是一键删除 先把所有数据存入 该用户对应的回收站文件中  
		if(i==1)head=NULL;
      if(i==-1)outhead=NULL;
		//直接让头结点指向NULL 链表即为空 
		  break;
		  
      default:printf("          请在1-5之间选择！\n\n");
}
printf("          若继续删除'y'/'Y'");
fflush(stdin);
scanf("%c",&ag); 		
}while(ag=='y'||ag=='Y'); 
}}