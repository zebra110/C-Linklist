#include "head.h"
extern struct list2 *usehead;
extern s[20];
void loginmodify()
{  printf("\n\n"); FILE *fp;
   fp=fopen("�û���Ϣ.txt","w");
    struct list2 *q;
    q=(struct list2*)malloc(sizeof(struct list2));
	int i,k=0,cc;
   int item,num,count=0,u,ff=1,pp,flag=0;
   char s2[20],ee[20]; 
   printf("                                     ������ԭ�˺�:");
   scanf("%s",s);
	while(k<=3)
	{i=0;
	 printf("\n                                    ������ԭ����:");
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
	 if(count==0)printf("\n                                     �������!������%d�λ���",3-k);
	if(k==3){printf("\n                                     ��������ѳ�������\n");exit(0); }     
}	
	if(count==1) 
	{  
       printf("                 ----------------------------------------------------\n");
       printf("                                                                 \n");
	    printf("                                ��У����ܱ�����:                \n");
		 printf("                                                                 \n"); 
       printf("                                1.�����׵�����                   \n");
		 printf("                                                                 \n"); 
		 printf("                                2.��ĸ�׵�����                   \n");
		 printf("                                                                 \n"); 
		 printf("                                3.��ӡ���������                 \n"); 
 	    printf("                                                                 \n"); 
	    printf("                                4.��ĳ����                     \n");
       printf("                                                                 \n"); 
		 printf("                                5.�Զ����ܱ�                     \n");
		 printf("                                                                 \n");
       printf("                 ----------------------------------------------------\n"); 
		 while(ff)
		 {printf("                               ��ѡ��:");
		 scanf("%d",&pp);
		 fflush(stdin);
		 switch(pp) 
		 {case 1:ff=0;printf("                                �����������׵�����");
		         scanf("%s",ee); 
               if(strcmp(q->info2.security,ee)==0)
					{flag=1;printf("                                �������µ�����:");
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
               if(flag==0)printf("                                �𰸴���\n");
			      break;
			
        case 2:ff=0;printf("                                ��������ĸ�׵�������"); 
             scanf("%s",ee); 
               if(strcmp(q->info2.security,ee)==0)
					{flag=1;printf("                                �������µ�����:");
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
               if(flag==0)printf("                                �𰸴���\n");
			      break;
			
        case 3:ff=0;printf("                                ��������ӡ��������£�"); 
              scanf("%s",ee); 
               if(strcmp(q->info2.security,ee)==0)
					{flag=1;printf("                                �������µ�����:");
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
               if(flag==0)printf("                                �𰸴���\n");
			      break;
			
			      
        case 4:ff=0;printf("                                ��������ĳ����:    "); 
             scanf("%s",ee); 
               if(strcmp(q->info2.security,ee)==0)
					{flag=1;printf("                                �������µ�����:");
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
               if(flag==0)printf("                                �𰸴���\n");
			      break;
			
        case 5:ff=0;printf("                                ���������Զ�����ܱ��𰸣�"); 
             scanf("%s",ee); 
               if(strcmp(q->info2.security,ee)==0)
					{flag=1;printf("                                �������µ�����:");
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
               if(flag==0)printf("                                �𰸴���\n");
			      break;
			
					
        default:printf("                                ����1-5֮��ѡ��\n");ff=1;break;
		  }}		     
	
  }
	if(flag==1)printf("\n                                �����޸ĳɹ���\n");	
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
