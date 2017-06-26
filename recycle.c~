#include "head.h"
extern s[20];
void recycle(int i)
{   
   struct list1 *temp,*recyclehead=NULL,*recyclerear=NULL,*p,*q;
   printf("\n\n");char file[20];
   struct family *p1;
   FILE *fp;int j=1;char ch;int num,ii,m[30];
	if(i==1)sprintf(file,"%s.收入回收站.TXT",s);//打开该用户对应的回收站文件进行读取 
   if(i==-1)sprintf(file,"%s.支出回收站.TXT",s);
   fp=fopen(file,"a+");
   while(p1=(struct family *)malloc(sizeof(struct family)), 
	fread(p1,sizeof(struct family),1,fp)==1)
   { 	
		temp=(struct list1 *)malloc(sizeof(struct list1));
	   temp->info1=*p1; 
      temp->next=NULL;  
     
   if(recyclehead==NULL)
	   {
		recyclehead=(struct list1*)malloc(sizeof(struct list1));	
	    recyclehead->next=temp;
	    recyclerear=temp;	
	   }
   else
      {
	    recyclerear->next=temp;
	    recyclerear=temp;
      }	
		
	} 

     p=recyclehead->next;
     while(p)
     {     
	         p->info1.arrange=j;
            printf("|%d\t|",j);
            printf("%d-%d-%d\t",p->info1.year,p->info1.month,p->info1.day);
			   if(i==1){printf("|收入\t|");
				printf("%s\t|",p->info1.name);
				printf("%s\t|",p->info1.money);}
				if(i==-1){printf("|支出\t|");
				printf("%s\t|",p->info1.name);
				printf("%s\t|",p->info1.outmoney);}	
			printf("%s|\n",p->info1.detail);
			j++;
			p=p->next;
     }

printf("            是否进行恢复信息操作Y/y");
fflush(stdin);
scanf("%c",&ch);
if(ch=='y'||ch=='Y')
{
	  printf("          请输入要恢复信息的数量：");
	  scanf("%d",&num); 
	  printf("          请输入要恢复的编号：");
	  for(ii=0;ii<num;ii++) 
	  {fflush(stdin);
	  scanf("%d",&m[ii]);
	  printf("\n          ");}
	  ii=0;
	while(ii<num)
   { if(m[ii]<j)
	    {
		 q=recyclehead;
      while(q!=NULL)
      {  p=q;
         q=q->next;
			
		   if(m[ii]==q->info1.arrange)
		   {
			   
				p->next=q->next;
		      FILE *ffp;
		      if(i==1)sprintf(file,"%s.收入.TXT",s);
	         if(i==-1)sprintf(file,"%s.支出.TXT",s);
            ffp=fopen(file,"a+");
	         fwrite(&q->info1,sizeof(struct family),1,ffp);
	         free(q);
				fclose(ffp);
	       	break;
		   }
	  }
	   }ii++;
   }
}//将恢复的信息从回收站删除 并存入原文件中 
            
            q=recyclehead->next;
            if(i==1)sprintf(file,"%s.收入回收站.TXT",s);
	         if(i==-1)sprintf(file,"%s.支出回收站.TXT",s);
            fp=fopen(file,"w");
            while(q)
	         {
				   fwrite(&q->info1,sizeof(struct family),1,fp);
         		q=q->next;
         	}
	         fclose(fp); 
	         
	
	
}