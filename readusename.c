#include "head.h"
extern struct list2 *usehead;
extern struct list2 *userear;
void readusename()
{
   struct list2 p1,*temp;
	FILE *fp;
   fp=fopen("�û���Ϣ.txt","r");
	if(fp!=NULL)
	{struct userinfo p1;
	while(fread(&p1,sizeof(struct userinfo),1,fp)==1)
   { 
	temp=(struct list2 *)malloc(sizeof(struct list2));
	temp->info2=p1; //p1Ϊ��ȡ���û���Ϣ������  ����temp->info1
   temp->next=NULL;
	  
   if(usehead==NULL)
	{
	usehead=temp;
	userear=temp;	//β�巨 ͷ��������� 
	}
   else
   {
	userear->next=temp;
	userear=temp;
	}
	}
	fclose(fp);}
}