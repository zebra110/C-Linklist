#include "head.h"
extern struct list2 *usehead;
extern struct list2 *userear;
void readusename()
{
   struct list2 p1,*temp;
	FILE *fp;
   fp=fopen("用户信息.txt","r");
	if(fp!=NULL)
	{struct userinfo p1;
	while(fread(&p1,sizeof(struct userinfo),1,fp)==1)
   { 
	temp=(struct list2 *)malloc(sizeof(struct list2));
	temp->info2=p1; //p1为读取的用户信息的数据  放入temp->info1
   temp->next=NULL;
	  
   if(usehead==NULL)
	{
	usehead=temp;
	userear=temp;	//尾插法 头结点存放数据 
	}
   else
   {
	userear->next=temp;
	userear=temp;
	}
	}
	fclose(fp);}
}