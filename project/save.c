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
   if(i==-1)p=outhead->next;}//��if��俼�ǵ�����Ϊ��ʱ head->next ���ܻ���� 
   else  
   p=NULL;
   
	FILE *fp;
	if(i==1)sprintf(file,"%s.����.TXT",s);
	if(i==-1)sprintf(file,"%s.֧��.TXT",s);
	fp=fopen(file,"wb+");
	
	while(p!=NULL) 
		{
			fwrite(&p->info1,sizeof(struct family),1,fp);// �������� ��������ַ 
			p=p->next;
		}
	fclose(fp);
}
