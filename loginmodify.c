#include "head.h"
extern struct list2 *usehead;
extern s[20];
void loginmodify()
{  printf("\n\n"); FILE *fp;
   fp=fopen("用户信息.txt","w");
    struct list2 *q;
    q=(struct list2*)malloc(sizeof(struct list2));
	int i,k=0,cc;
   int item,num,count=0,u,ff=1,pp,flag=0;
   char s2[20],ee[20]; 
   printf("                                     请输入原账号:");
   scanf("%s",s);
	while(k<=3)
	{i=0;
	 printf("\n                                    请输入原密码:");
	 while(1)
    {   u=getch();
        if(u==10||u==13) 
		  break;
		  printf("*");
 		  s2[i]=u;
        i++;
    }s2[i]='\0';    	 
	q=usehead;
	while(q!=NULL)	  
	{ if(strcmp(s,q->info2.usename)==0&&strcmp(s2,q->info2.password)==0)
     {count=1;break;}
     q=q->next;
   }
	k++;
	if(count==1)break;
	 if(count==0)printf("\n                                     密码错误!您还有%d次机会",3-k);
	if(k==3){printf("\n                                     输入次数已超出限制\n");exit(0); }     
}	
	if(count==1) 
	{  
       printf("                 ----------------------------------------------------\n");
       printf("                                                                 \n");
	    printf("                                待校验的密保问题:                \n");
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
       printf("                 ----------------------------------------------------\n"); 
		 while(ff)
		 {printf("                               请选择:");
		 scanf("%d",&pp);
		 fflush(stdin);
		 switch(pp) 
		 {case 1:ff=0;printf("                                请输入您父亲的姓名");
		         scanf("%s",ee); 
               if(strcmp(q->info2.security,ee)==0)
					{flag=1;printf("                                请输入新的密码:");
i=0;while(1)
    {   u=getch();
        if(u==10||u==13) 
		  break;
		  printf("*");
 		  s2[i]=u;
        i++;
    }s2[i]='\0'; 
	 strcpy(q->info2.password,s2);}   
	 saveusename();
               if(flag==0)printf("                                答案错误！\n");
			      break;
			
        case 2:ff=0;printf("                                请输入您母亲的姓名："); 
             scanf("%s",ee); 
               if(strcmp(q->info2.security,ee)==0)
					{flag=1;printf("                                请输入新的密码:");
i=0;while(1)
    {   u=getch();
        if(u==10||u==13) 
		  break;
		  printf("*");
 		  s2[i]=u;
        i++;
    }s2[i]='\0'; 
	 strcpy(q->info2.password,s2);}   
	 saveusename();
               if(flag==0)printf("                                答案错误！\n");
			      break;
			
        case 3:ff=0;printf("                                请输入你印象最深的事："); 
              scanf("%s",ee); 
               if(strcmp(q->info2.security,ee)==0)
					{flag=1;printf("                                请输入新的密码:");
i=0;while(1)
    {   u=getch();
        if(u==10||u==13) 
		  break;
		  printf("*");
 		  s2[i]=u;
        i++;
    }s2[i]='\0'; 
	 strcpy(q->info2.password,s2);}   
	 saveusename();
               if(flag==0)printf("                                答案错误！\n");
			      break;
			
			      
        case 4:ff=0;printf("                                请输入你的出身地:    "); 
             scanf("%s",ee); 
               if(strcmp(q->info2.security,ee)==0)
					{flag=1;printf("                                请输入新的密码:");
i=0;while(1)
    {   u=getch();
        if(u==10||u==13) 
		  break;
		  printf("*");
 		  s2[i]=u;
        i++;
    }s2[i]='\0'; 
	 strcpy(q->info2.password,s2);}   
	 saveusename();
               if(flag==0)printf("                                答案错误！\n");
			      break;
			
        case 5:ff=0;printf("                                请输入您自定义的密保答案："); 
             scanf("%s",ee); 
               if(strcmp(q->info2.security,ee)==0)
					{flag=1;printf("                                请输入新的密码:");
i=0;while(1)
    {   u=getch();
        if(u==10||u==13) 
		  break;
		  printf("*");
 		  s2[i]=u;
        i++;
    }s2[i]='\0'; 
	 strcpy(q->info2.password,s2);}   
	 saveusename();
               if(flag==0)printf("                                答案错误！\n");
			      break;
			
					
        default:printf("                                请在1-5之间选择！\n");ff=1;break;
		  }}		     
	
  }
	if(flag==1)printf("\n                                密码修改成功！\n");	
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
