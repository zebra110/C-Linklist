#include "head.h"
extern struct list2 *usehead;
extern s[20];
void login()
{   
    struct list2 *q;
    q=(struct list2*)malloc(sizeof(struct list2));
	int i,k=0;//k用于控制用户输入密码的次数 
   int item,num,count=0,u;
   char s2[20]; printf("\n");
   printf("                                     请输入账号:");
   scanf("%s",s);
	while(k<=3)
	{i=0;printf("\n");
	 printf("                                     请输入密码:");
	 while(1)
    {   u=getch();
        if(u==10||u==13) //'\0'的ASCII码值为10和13 
		  break;
		  printf("*");
 		  s2[i]=u;
        i++;
    }s2[i]='\0';    	 
	q=usehead;
	while(q!=NULL)	  
	{ if(strcmp(s,q->info2.usename)==0&&strcmp(s2,q->info2.password)==0)
     {printf("\n\n");printf("                                     登录成功!\n");count=1;break;}
     q=q->next;
   }
	k++;
	if(count==1){homepage();break;}
   if(count==0){printf("\n"); printf("                                     密码错误!您还有%d次机会",3-k);} 
	if(k==3){printf("\n");printf("                                     输入次数已超出限制\n");exit(0); }      
}
} 