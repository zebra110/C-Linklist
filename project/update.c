#include "head.h"
extern struct list1 *head;
extern struct list1 *outhead;
void update(int i)
{  
   printf("\n\n");
   struct list1 *q=NULL;  
	int j,m,a=0,year,month,day,count,item,itemm,x=0;
	char ag,name[2],money[20],detail[20];
	
   if(i==1&&head==NULL)    {printf("        \t���κμ�¼��\n");a=1;}
   if(i==-1&&outhead==NULL){printf("        \t���κμ�¼��\n");a=1;}
	
	if(a==0) 
{ 
do{
   printf("                 ----------------------------------------------------\n");	
   printf("                                                                     \n");
   printf("                                    1.�������޸�                     \n");
   printf("                                                                     \n");
   printf("                                    2.�������޸�                     \n");
   printf("                                                                     \n");
   printf("                                    3.������޸�                     \n");
   printf("                                                                     \n");
   printf("                                    4.����ע�޸�                     \n");
   printf("                                                                     \n");
   printf("                 ----------------------------------------------------\n");
   printf("                                    ��ѡ��:");
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
	printf("                       ������Ҫ�޸���Ϣ�����ڣ����磺2005-02-21��:");
	fflush(stdin);
   scanf("%d-%d-%d",&year,&month,&day);
	printf("|NO.\t|��-��-��\t|����\t|����\t|���\t|��ע|\n");
	while(q!=NULL)
	{  if(q->info1.year==year&&q->info1.month==month&&q->info1.day==day)
	  {
  		q->info1.arrange=j;//��j��ֵ����q->info1.arrange ����֮���ҵ�Ҫ�޸ĵ��Ǹ��ڵ� 
	   printf("\n");
	   printf("|%d\t|",q->info1.arrange);
	   printf("%d-%d-%d\t",q->info1.year,q->info1.month,q->info1.day);
		if(i==1)
		{
		   printf("|����\t|");
		   printf("%s\t|",q->info1.name);
		   printf("%s\t|",q->info1.money);
		}
		if(i==-1)
		{
		   printf("|֧��\t|");
		   printf("%s\t|",q->info1.name);
		   printf("%s\t|",q->info1.outmoney);
		}
		printf("%s|\n",q->info1.detail);
		j++;
		count=1;}
		q=q->next;
	} 
	if(count==0)
	printf("                                    ��Ǹ��û�и��յĲ����¼��\n"); 
	if(count==1)
	{printf("                                    ������Ҫ�޸ĵı�ţ�");
	 scanf("%d",&m);	 
    printf("\n\n");
   if(i==1)q=head->next;
   if(i==-1)q=outhead->next;
   while(q!=NULL)
      {
		   if(m==q->info1.arrange)
		   {x=1;  
	printf("                                                                     \n");
   printf("                                    1.�޸�����                       \n");
   printf("                                                                     \n");
   printf("                                    2.�޸�����                       \n");
   printf("                                                                     \n");
   printf("                                    2.�޸Ľ��                       \n");
   printf("                                                                     \n");
   printf("                                    4.�޸ı�ע                       \n");
  	printf("                                                                     \n");
   fflush(stdin);
  	printf("                                    ��ѡ��"); 
   scanf("%d",&itemm); 
   printf("\n");
   switch(itemm)
   {   
           case 1:
            printf("                       �������µ����ڣ��磺2005-02-21��:");
            fflush(stdin);
            scanf("%d-%d-%d",&q->info1.year,&q->info1.month,&q->info1.day);
            printf("\n\n");
            printf("                                    �޸ĳɹ�\n");
	         printf("\n\n");
            break;
			
  	        case 2:
	         printf("                                    �������µ�����:");
	         scanf("%s",q->info1.name);
				printf("\n\n");
		      printf("�޸ĳɹ�\n");
				printf("\n\n");
				break;
				
				case 3:
				printf("                                    �������µĽ��:");
   	      if(i==1)
				scanf("%s",q->info1.money);            
				if(i==-1)
				scanf("%s",q->info1.outmoney);
				printf("\n\n");
            printf("                                    �޸ĳɹ�\n");
				printf("\n\n");
            break;
			
				case 4:
				printf("                                    �������µı�ע:");
	         scanf("%s",q->info1.detail);
				printf("\n\n");
		      printf("�޸ĳɹ�\n");
				printf("\n\n");
			   break;
				 
			   default:printf("                                    ����1-3֮��ѡ��\n");
            }         
			   if(x==0)printf("                                    �ñ�Ų�����\n");
    }
		   q=q->next;
	}
}break;
		
	case 2: 
	printf("                                    ������Ҫ�޸���Ϣ������:");
	fflush(stdin);
   scanf("%s",name);printf("\n\n");
	printf("|NO.\t|��-��-��\t|����\t|����\t|���\t|��ע|\n");
	while(q!=NULL)
	{ 
	   if(strcmp(q->info1.name,name)==0)
      {
		q->info1.arrange=j;
	   printf("\n");
	   printf("|%d\t|",q->info1.arrange);
	   printf("%d-%d-%d\t",q->info1.year,q->info1.month,q->info1.day);
		if(i==1){printf("|����\t|");
		printf("%s\t|",q->info1.name);
		printf("%s\t|",q->info1.money);}
		if(i==-1){printf("|֧��\t|");
		printf("%s\t|",q->info1.name);
		printf("%s\t|",q->info1.outmoney);}
		printf("%s|\n",q->info1.detail);
		j++;count=1;}
		q=q->next;
		
	} 
	if(count==0)
	printf("                                    ��Ǹ��û�иó�Ա�Ĳ����¼��\n"); 
	if(count==1)
	{printf("                                    ������Ҫ�޸ĵı�ţ�");
	scanf("%d",&m);
	  if(i==1)q=head->next;
     if(i==-1)q=outhead->next;
      while(q!=NULL)
      { if(m==q->info1.arrange)
		   { 	x=1;	   
	printf("                                                                     \n");
   printf("                                    1.�޸�����                       \n");
   printf("                                                                     \n");
   printf("                                    2.�޸�����                       \n");
   printf("                                                                     \n");
   printf("                                    2.�޸Ľ��                       \n");
   printf("                                                                     \n");
   printf("                                    4.�޸ı�ע                       \n");
  	printf("                                                                     \n");
   fflush(stdin);
  	printf("                                    ��ѡ��"); 
   scanf("%d",&itemm); 
   printf("\n");
   switch(itemm)
   {   
           case 1:
            printf("                       �������µ����ڣ��磺2005-02-21��:");
            fflush(stdin);
            scanf("%d-%d-%d",&q->info1.year,&q->info1.month,&q->info1.day);
            printf("\n\n");
            printf("                                    �޸ĳɹ�\n");
	         printf("\n\n");
            break;
			
  	        case 2:
	         printf("                                    �������µ�����:");
	         scanf("%s",q->info1.name);
				printf("\n\n");
		      printf("�޸ĳɹ�\n");
				printf("\n\n");
				break;
				
				case 3:
				printf("                                    �������µĽ��:");
   	      if(i==1)
				scanf("%s",q->info1.money);            
				if(i==-1)
				scanf("%s",q->info1.outmoney);
				printf("\n\n");
            printf("                                    �޸ĳɹ�\n");
				printf("\n\n");
            break;
			
				case 4:
				printf("                                    �������µı�ע:");
	         scanf("%s",q->info1.detail);
				printf("\n\n");
		      printf("�޸ĳɹ�\n");
				printf("\n\n");
			   break;
				 
			   default:printf("                                    ����1-3֮��ѡ��\n");
            }         
			   if(x==0)printf("                                    �ñ�Ų�����\n");
    }
		   q=q->next;
	}
}break;
		   
	case 3:
	printf("                                    ����������:");
	fflush(stdin);
   scanf("%s",money); printf("\n\n");
	printf("|NO.\t|��-��-��\t|����\t|����\t|���\t|��ע|\n");
	while(q!=NULL)
	{ 
	   if(strcmp(q->info1.money,money)==0)
      {
		q->info1.arrange=j;
	   printf("\n");
	   printf("|%d\t|",q->info1.arrange);
	   printf("%d-%d-%d\t",q->info1.year,q->info1.month,q->info1.day);
		if(i==1){printf("|����\t|");
		printf("%s\t|",q->info1.name);
		printf("%s\t|",q->info1.money);}
		if(i==-1){printf("|֧��\t|");
		printf("%s\t|",q->info1.name);
		printf("%s\t|",q->info1.outmoney);}
		printf("%s|\n",q->info1.detail);
		j++;count=1;}
		q=q->next;
		
	} 
	if(count==0)
	printf("                                    ��Ǹ��û�иó�Ա�Ĳ����¼��\n"); 
	if(count==1)
	{printf("                                    ������Ҫ�޸ĵı�ţ�");
	scanf("%d",&m); 
	    printf("\n\n");
		 if(i==1)q=head->next;
   if(i==-1)q=outhead->next;
      while(q!=NULL)
      {
		   if(m==q->info1.arrange)
		   { 	x=1;	   
	printf("                                                                     \n");
   printf("                                    1.�޸�����                       \n");
   printf("                                                                     \n");
   printf("                                    2.�޸�����                       \n");
   printf("                                                                     \n");
   printf("                                    2.�޸Ľ��                       \n");
   printf("                                                                     \n");
   printf("                                    4.�޸ı�ע                       \n");
  	printf("                                                                     \n");
   fflush(stdin);
  	printf("                                    ��ѡ��"); 
   scanf("%d",&itemm); 
   printf("\n");
   switch(itemm)
   {   
           case 1:
            printf("                       �������µ����ڣ��磺2005-02-21��:");
            fflush(stdin);
            scanf("%d-%d-%d",&q->info1.year,&q->info1.month,&q->info1.day);
            printf("\n\n");
            printf("                                    �޸ĳɹ�\n");
	         printf("\n\n");
            break;
			
  	        case 2:
	         printf("                                    �������µ�����:");
	         scanf("%s",q->info1.name);
				printf("\n\n");
		      printf("�޸ĳɹ�\n");
				printf("\n\n");
				break;
				
				case 3:
				printf("                                    �������µĽ��:");
   	      if(i==1)
				scanf("%s",q->info1.money);            
				if(i==-1)
				scanf("%s",q->info1.outmoney);
				printf("\n\n");
            printf("                                    �޸ĳɹ�\n");
				printf("\n\n");
            break;
			
				case 4:
				printf("                                    �������µı�ע:");
	         scanf("%s",q->info1.detail);
				printf("\n\n");
		      printf("�޸ĳɹ�\n");
				printf("\n\n");
			   break;
				 
			   default:printf("                                    ����1-3֮��ѡ��\n");
            }         
			   if(x==0)printf("                                    �ñ�Ų�����\n");
    }
		   q=q->next;
	}
}break;
	
	case 4:
	printf("                                    �����뱸ע:");
	fflush(stdin);
   scanf("%s",detail); printf("\n\n");
	printf("|NO.\t|��-��-��\t|����\t|����\t|���\t|��ע|\n");
	while(q!=NULL)
	{ 
	   if(strcmp(q->info1.detail,detail)==0)
      {
		q->info1.arrange=j;
	   printf("\n");
	   printf("|%d\t|",q->info1.arrange);
	   printf("%d-%d-%d\t",q->info1.year,q->info1.month,q->info1.day);
		if(i==1){printf("|����\t|");
		printf("%s\t|",q->info1.name);
		printf("%s\t|",q->info1.money);}
		if(i==-1){printf("|֧��\t|");
		printf("%s\t|",q->info1.name);
		printf("%s\t|",q->info1.outmoney);}
		printf("%s|\n",q->info1.detail);
		j++;count=1;}
		q=q->next;
		
	} 
	if(count==0)
	printf("                                    ��Ǹ��û�иó�Ա�Ĳ����¼��\n"); 
	if(count==1)
	{printf("                                    ������Ҫ�޸ĵı�ţ�");
	scanf("%d",&m);
	   printf("\n\n"); 
		if(i==1)q=head->next;
   if(i==-1)q=outhead->next;
      while(q!=NULL)
      {
		   if(m==q->info1.arrange)
		   { 	x=1;	   
	printf("                                                                     \n");
   printf("                                    1.�޸�����                       \n");
   printf("                                                                     \n");
   printf("                                    2.�޸�����                       \n");
   printf("                                                                     \n");
   printf("                                    2.�޸Ľ��                       \n");
   printf("                                                                     \n");
   printf("                                    4.�޸ı�ע                       \n");
  	printf("                                                                     \n");
   fflush(stdin);
  	printf("                                    ��ѡ��"); 
   scanf("%d",&itemm); 
   printf("\n");
   switch(itemm)
   {   
           case 1:
            printf("                       �������µ����ڣ��磺2005-02-21��:");
            fflush(stdin);
            scanf("%d-%d-%d",&q->info1.year,&q->info1.month,&q->info1.day);
            printf("\n\n");
            printf("                                    �޸ĳɹ�\n");
	         printf("\n\n");
            break;
			
  	        case 2:
	         printf("                                    �������µ�����:");
	         scanf("%s",q->info1.name);
				printf("\n\n");
		      printf("�޸ĳɹ�\n");
				printf("\n\n");
				break;
				
				case 3:
				printf("                                    �������µĽ��:");
   	      if(i==1)
				scanf("%s",q->info1.money);            
				if(i==-1)
				scanf("%s",q->info1.outmoney);
				printf("\n\n");
            printf("                                    �޸ĳɹ�\n");
				printf("\n\n");
            break;
			
				case 4:
				printf("                                    �������µı�ע:");
	         scanf("%s",q->info1.detail);
				printf("\n\n");
		      printf("�޸ĳɹ�\n");
				printf("\n\n");
			   break;
				 
			   default:printf("                                    ����1-3֮��ѡ��\n");
            }         
			   if(x==0)printf("                                    �ñ�Ų�����\n");
    }
		   q=q->next;
	}
}break;

	default:printf("                                    ����1-4֮��ѡ��\n");
 
 }
	printf("                                   �������޸� 'y'/'Y'");
fflush(stdin);
scanf("%c",&ag); 		
}while(ag=='y'||ag=='Y');  
}}
