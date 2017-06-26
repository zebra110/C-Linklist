#include "head.h"
extern struct list2 *usehead;
void getpassword()
{  printf("\n\n"); 
    struct list2 *q;
    q=(struct list2*)malloc(sizeof(struct list2));q=usehead;
   int item,num,count=0,pp,flag=0,bb,u,ff=1,i;
   char s2[20],ee[100];
   printf("                                    请输入原账号:");
   scanf("%s",s2);
       printf("                 ------------------------------------------------\n");
       printf("                                                                 \n");
       printf("                                请选择待校验的密保问题:          \n");
		 printf("                                                                 \n"); 
       printf("                                1.您父亲的姓名                   \n");
		 printf("                                                                 \n"); 
		 printf("                                2.您母亲的姓名                   \n");
		 printf("                                                                 \n"); 
		 printf("                                3.你印象最深的事                 \n"); 
 	    printf("                                                                 \n"); 
	    printf("                                4.你的出身地                     \n");
       printf("                                                                 \n"); 
		 printf("                                5.自定义密保                     \n");
		 printf("                                                                 \n");
		 printf("                 ------------------------------------------------\n"); 
	    while(ff)
	    {
		 printf("                               请选择:");
		 fflush(stdin);
		 scanf("%d",&pp);
		 switch(pp) 
		 {case 1:ff=0;printf("                               请输入您父亲的姓名:");
		         scanf("%s",ee); 
            while(q!=NULL)	  
	{ if(strcmp(s2,q->info2.usename)==0&&strcmp(q->info2.security,ee)==0)
     {printf("                               您的原密码为:%s\n",q->info2.password); 
	count=1;break;}
      q=q->next;
   }
			break;
   

        case 2:ff=0;printf("                               请输入您母亲的姓名:"); 
               scanf("%s",ee); 
            while(q!=NULL)	  
	{ if(strcmp(s2,q->info2.usename)==0&&strcmp(q->info2.security,ee)==0)
     {printf("                               您的原密码为:%s\n",q->info2.password); 
	count=1;break;}
      q=q->next;
   }
			break;
   
					
        case 3:ff=0;printf("                               请输入你印象最深的事:"); 
               scanf("%s",ee); 
            while(q!=NULL)	  
	{ if(strcmp(s2,q->info2.usename)==0&&strcmp(q->info2.security,ee)==0)
     {printf("                               您的原密码为:%s\n",q->info2.password); 
	count=1;break;}
      q=q->next;
   }
			break;
   
					
        case 4:ff=0;printf("                               请输入你的出身地:  "); 
               scanf("%s",ee); 
            while(q!=NULL)	  
	{ if(strcmp(s2,q->info2.usename)==0&&strcmp(q->info2.security,ee)==0)
     {printf("                               您的原密码为:%s\n",q->info2.password); 
	count=1;break;}
      q=q->next;
   }
			break;
   
					
        case 5:ff=0;printf("                               请输入您自定义的密保答案:"); 
               scanf("%s",ee); 
            while(q!=NULL)	  
	{ if(strcmp(s2,q->info2.usename)==0&&strcmp(q->info2.security,ee)==0)
     {printf("                               您的原密码为:%s\n",q->info2.password); 
	count=1;break;}
      q=q->next;
   }
			break;
   
					
        default:printf("                               请在1-5之间选择！\n");ff=1;
		  }}		     
		  
   if(count==0){printf("                               原登录信息不正确!\n");exit(0);} 
    printf("                 ----------------------------------------------------\n");
   printf("                                                                     \n");
	printf("                                    1.登录                           \n");
	printf("                                                                     \n");
   printf("                                    2.注册                           \n");
   printf("                                                                     \n");
	printf("                                    3.密码修改                       \n");
   printf("                                                                     \n");
   printf("                                    4.退出                           \n");
   printf("                                                                     \n");
   printf("                 ----------------------------------------------------\n"); 
   ff=1;
	while(ff)
   {printf("                                   请选择：");
	fflush(stdin);scanf("%d",&u);
	switch(u)
	{
	case 1:ff=0;login();break;
	case 2:ff=0;registe();break;
 	case 3:ff=0;loginmodify();break;
 	case 4:ff=0;exit(0);break;
 	default:printf("                                请在1-4之间选择\n");ff=1;
	}}
}