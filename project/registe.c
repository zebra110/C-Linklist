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
	printf("\n                                    �������˺�"); 
	fflush(stdin); 
	scanf("%s",p1->info2.usename);
	
	q=usehead; 
	while(q!=NULL)	  
	{ if(strcmp(p1->info2.usename,q->info2.usename)==0)
     {printf("\n                                    ���и��˺�,������¼��!\n");
     flag=1;
     break;}
     q=q->next;//��֤�˺Ų��ظ� ���ļ������ظ� ������ݻ��� �� 
   }
   
   }
       e=0;
   if(flag==0)
       {
        printf("                                    ����������:");
        while((sh[e]=getch())!='\r')
		 {
		   printf("*");
 			e++;
 		 }sh[e]='\0';
	    e=0;
 		 printf("\n");
	    printf("                                    ���ٴ���������:");
       while((p1->info2.password[e]=getch())!='\r')
		 {
		 printf("*");
 			e++;
 		 }p1->info2.password[e]='\0';
 		 printf("%s",p1->info2.password);
 		 if(strcmp(sh,p1->info2.password)!=0)
	  {printf("\n                                    �����������벻��ͬ��������ע�ᣡ");registe();}
 		 
	    printf("\n           ----------------------------------------------------\n");
		 printf("                                                                 \n");
       printf("                                    ��ѡ���ܱ�����:              \n");
       printf("                                                                 \n");
       printf("                                    1.�����׵�����               \n");
       printf("                                                                 \n");
		 printf("                                    2.��ĸ�׵�����               \n");
	    printf("                                                                 \n");
		 printf("                                    3.��ӡ���������             \n");
       printf("                                                                 \n");
 	    printf("                                    4.��ĳ�����                 \n");
       printf("                                                                 \n");
       printf("                                    5.�Զ����ܱ�����             \n");
       printf("                                                                 \n");
		 printf("                 ----------------------------------------------------\n"); 
		 while(ff)
		 {printf("                                   ��ѡ��:");
		 fflush(stdin);scanf("%d",&pp);
		 switch(pp) 
		 {case 1:ff=0;printf("                                   �����������׵�����:"); 
               scanf("%s",p1->info2.security);break;        
        case 2:ff=0;printf("                                   ��������ĸ�׵�����:"); 
               scanf("%s",p1->info2.security);break;
        case 3:ff=0;printf("                                   ��������ӡ���������:"); 
               scanf("%s",p1->info2.security);break;
        case 4:ff=0;printf("                                   ��������ĳ�����:"); 
               scanf("%s",p1->info2.security);break;
        case 5:ff=0;printf("                                   ���������Զ�����ܱ���:"); 
               scanf("%s",p1->info2.security);break;
        default:printf("                                  ����1-5֮��ѡ��\n");ff=1;
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
   printf("                                   ע��ɹ���\n");    
 }
   printf("                 ----------------------------------------------------\n");
   printf("                                                                     \n");
	printf("                                    1.��¼                           \n");
	printf("                                                                     \n");
   printf("                                    2.ע��                           \n");
   printf("                                                                     \n");
	printf("                                    3.�����޸�                       \n");
   printf("                                                                     \n");
   printf("                                    4.�˳�                           \n");
   printf("                                                                     \n");
   printf("                 ----------------------------------------------------\n"); 
   ff=1;
	while(ff)
   {printf("                                   ��ѡ��");
	fflush(stdin);scanf("%d",&u);
	switch(u)
	{
	case 1:ff=0;login();break;
	case 2:ff=0;registe();break;
 	case 3:ff=0;loginmodify();break;
 	case 4:ff=0;exit(0);break;
 	default:printf("                                ����1-4֮��ѡ��\n");ff=1;
	}}
	  
}