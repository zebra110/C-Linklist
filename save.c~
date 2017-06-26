#include "head.h"
extern struct list1 *head;
extern struct list1 *outhead;
extern s[20];
void save(int i)
{   
   struct list1 *p;
	char file[20];
	if(head!=NULL||outhead!=NULL)
   {if(i==1)p=head->next;
   if(i==-1)p=outhead->next;}//该if语句考虑到链表为空时 head->next 可能会出错 
   else  
   p=NULL;
   
	FILE *fp;
	if(i==1)sprintf(file,"%s.收入.TXT",s);
	if(i==-1)sprintf(file,"%s.支出.TXT",s);
	fp=fopen(file,"wb+");
	
	while(p!=NULL) 
		{
			fwrite(&p->info1,sizeof(struct family),1,fp);// 存入数据 无需存入地址 
			p=p->next;
		}
	fclose(fp);
}
