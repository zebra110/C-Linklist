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
	//�����ǰͷ�����ָ�� �ȳ�ʼ��ΪNULL ���¶�ȡ ��ֹ��ε���readʹ�ڵ��ظ� 
   
	FILE *fp;
   if(i==1)sprintf(file,"%s.����.TXT",s);//sΪ�û��� ʵ���˻�����Ϣһ��һ 
	if(i==-1)sprintf(file,"%s.֧��.TXT",s);
	fp=fopen(file,"r"); 
   
	while(p1=(struct family *)malloc(sizeof(struct family )),fread(p1,sizeof(struct family ),1,fp)==1)
 {
	temp=(struct list1 *)malloc(sizeof(struct list1));
	temp->info1=*p1; //p1Ϊ��ȡ������  ����temp->info1
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
	    h++;//ͳ�ƶ�ȡ��Ϣ������ 
 }
	  fclose(fp);
}