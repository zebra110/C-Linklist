#include "head.h"
extern struct list2 *usehead;
extern struct list2 *userear;
void registe()
{  
   struct list2 *p1,*q,*p; char sh[20];
   p1=(struct list2*)malloc(sizeof(struct list2));
   int e=0,flag=1,u,pp,ff=1;   
   while(flag)
   {
	flag=0;
	printf("\n                                    请输入账号"); 
	fflush(stdin); 
	scanf("%s",p1->info2.usename);
	
	q=usehead; 
	while(q!=NULL)	  
	{ if(strcmp(p1->info2.usename,q->info2.usename)==0)
     {printf("\n                                    已有该账号,请重新录入!\n");
     flag=1;
     break;}
     q=q->next;//保证账号不重复 （文件名不重复 造成数据混乱 ） 
   }
   
   }
       e=0;
   if(flag==0)
       {
        printf("                                    请输入密码:");
        while((sh[e]=getch())!='\r')
		 {
		   printf("*");
 			e++;
 		 }sh[e]='\0';
	    e=0;
 		 printf("\n");
	    printf("                                    请再次输入密码:");
       while((p1->info2.password[e]=getch())!='\r')
		 {
		 printf("*");
 			e++;
 		 }p1->info2.password[e]='\0';
 		 printf("%s",p1->info2.password);
 		 if(strcmp(sh,p1->info2.password)!=0)
	  {printf("\n                                    两次密码输入不相同，请重新注册！");registe();}
 		 
	    printf("\n           ----------------------------------------------------\n");
		 printf("                                                                 \n");
       printf("                                    请选择密保问题:              \n");
       printf("                                                                 \n");
       printf("                                    1.您父亲的姓名               \n");
       printf("                                                                 \n");
		 printf("                                    2.您母亲的姓名               \n");
	    printf("                                                                 \n");
		 printf("                                    3.你印象最深的事             \n");
       printf("                                                                 \n");
 	    printf("                                    4.你的出身地                 \n");
       printf("                                                                 \n");
       printf("                                    5.自定义密保密码             \n");
       printf("                                                                 \n");
		 printf("                 ----------------------------------------------------\n"); 
		 while(ff)
		 {printf("                                   请选择:");
		 fflush(stdin);scanf("%d",&pp);
		 switch(pp) 
		 {case 1:ff=0;printf("                                   请输入您父亲的姓名:"); 
               scanf("%s",p1->info2.security);break;        
        case 2:ff=0;printf("                                   请输入您母亲的姓名:"); 
               scanf("%s",p1->info2.security);break;
        case 3:ff=0;printf("                                   请输入你印象最深的事:"); 
               scanf("%s",p1->info2.security);break;
        case 4:ff=0;printf("                                   请输入你的出身地:"); 
               scanf("%s",p1->info2.security);break;
        case 5:ff=0;printf("                                   请输入您自定义的密保答案:"); 
               scanf("%s",p1->info2.security);break;
        default:printf("                                  请在1-5之间选择！\n");ff=1;
		  }}		     

   if(usehead==NULL)
	{
	usehead=p1;
	userear=p1;
	}
	else
   {userear->next=p1;
	userear=p1;}userear->next=NULL;	
   saveusename(); 	
   printf("                                   注册成功！\n");    
 }
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
