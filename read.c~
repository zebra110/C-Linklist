#include "head.h"
extern struct list1 *head;
extern struct list1 *rear;
extern struct list1 *outhead;
extern struct list1 *outrear;
extern s[20];
extern h;
void read(int i)
{  
   struct family *p1;
	struct list1 *temp;
	char file[20];
   if(i==1){if(head!=NULL)head=NULL;}
   if(i==-1){if(outhead!=NULL)outhead=NULL;}
	//如果当前头结点有指向 先初始化为NULL 重新读取 防止多次调用read使节点重复 
   
	FILE *fp;
   if(i==1)sprintf(file,"%s.收入.TXT",s);//s为用户名 实现账户与信息一对一 
	if(i==-1)sprintf(file,"%s.支出.TXT",s);
	fp=fopen(file,"r"); 
   
	while(p1=(struct family *)malloc(sizeof(struct family )),fread(p1,sizeof(struct family ),1,fp)==1)
 {
	temp=(struct list1 *)malloc(sizeof(struct list1));
	temp->info1=*p1; //p1为读取的数据  放入temp->info1
   temp->next=NULL;  
	 
	if(i==1)
	{
	if(head==NULL)
	  {
	    head=(struct list1*)malloc(sizeof(struct list1));	
	    head->next=temp;
	    rear=temp;
     }
   else
     {
	   rear->next=temp;
	   rear=temp;
     }
	}
	
	if(i==-1)
	{
   if(outhead==NULL)
	   {
		 outhead=(struct list1*)malloc(sizeof(struct list1));	
	    outhead->next=temp;
	    outrear=temp;	
	   }
   else
      {
	    outrear->next=temp;
	    outrear=temp;
      }
	}
	    h++;//统计读取信息的条数 
 }
	  fclose(fp);
}