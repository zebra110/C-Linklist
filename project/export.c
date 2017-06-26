#include "head.h"
extern struct list1 *head;
extern struct list1 *outhead;
extern s[20];
void export(int i)
{	  
  char file[20];
  if(i==1)sprintf(file,"%s.收入信息.csv",s);
  if(i==-1)sprintf(file,"%s.支出信息.csv",s);//导出到该用户名对应的文件中 
  FILE * fp=fopen(file,"w");
  fprintf(fp,"%s   %s   %s   %s   %s   %s \n","年", "月","日","姓名","金额","备注");
  struct list1 *p;
  if(i==1)p=head->next;
   if(i==-1)p=outhead->next;
  while(p!=NULL) 
		{  if(i==1)
			fprintf(fp,"%d   %d   %d   %s   %s   %s \n",p->info1.year,p->info1.month,p->info1.day,p->info1.name,p->info1.money,p->info1.detail);
			if(i==-1)
			fprintf(fp,"%d   %d   %d   %s   %s   %s \n",p->info1.year,p->info1.month,p->info1.day,p->info1.name,p->info1.outmoney,p->info1.detail);
			p=p->next;
		}  
   fclose(fp);
   printf("\n\n                      信息已成功导出\n\n");
}