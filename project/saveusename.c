#include "head.h"
extern struct list2 *usehead;
void saveusename()
{ 
  
  struct list2 *p;	
  p=usehead;
	FILE *fp;
	fp=fopen("�û���Ϣ.txt","w");
	while(p!=NULL) 
		{
			fwrite(&p->info2,sizeof(struct userinfo),1,fp);
			p=p->next;//���ڱ����û���Ϣ 
		}
	fclose(fp);
}
