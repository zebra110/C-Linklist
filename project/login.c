#include "head.h"
extern struct list2 *usehead;
extern s[20];
void login()
{   
    struct list2 *q;
    q=(struct list2*)malloc(sizeof(struct list2));
	int i,k=0;//k���ڿ����û���������Ĵ��� 
   int item,num,count=0,u;
   char s2[20]; printf("\n");
   printf("                                     �������˺�:");
   scanf("%s",s);
	while(k<=3)
	{i=0;printf("\n");
	 printf("                                     ����������:");
	 while(1)
    {   u=getch();
        if(u==10||u==13) //'\0'��ASCII��ֵΪ10��13 
		  break;
		  printf("*");
 		  s2[i]=u;
        i++;
    }s2[i]='\0';    	 
	q=usehead;
	while(q!=NULL)	  
	{ if(strcmp(s,q->info2.usename)==0&&strcmp(s2,q->info2.password)==0)
     {printf("\n\n");printf("                                     ��¼�ɹ�!\n");count=1;break;}
     q=q->next;
   }
	k++;
	if(count==1){homepage();break;}
   if(count==0){printf("\n"); printf("                                     �������!������%d�λ���",3-k);} 
	if(k==3){printf("\n");printf("                                     ��������ѳ�������\n");exit(0); }      
}
} 