#include "head.h"
void menu(int i)
{   
    
   int choice;float money,outmoney;
	char ag;
	if(i==1)
{
do{ printf("\n\n");
    printf("                                      �������                        \n\n");
    printf("                     1.���           2.��ѯ           3.�޸�\n\n");
    printf("                     4.��ʾ           5.ɾ��           6.����վ\n\n");
    printf("                     7.����           8.����           9.������ҳ��\n\n");
    printf("                     ��ѡ��");
	scanf("%d",&choice);
	read(1);//�û�����ѡ��ʱ ���¶�ȡһ�� ��֤���ݸ��� 
	switch(choice)
	{
		case 1:add(1);save(1);break;
		case 2:search(1);break;
		case 3:update(1);save(1);break;
		case 4:show(1);break;
		case 5:delet(1);save(1);break;
		case 6:recycle(1);break;
		case 7:sort(1);save(1);show(1);break;
		case 8:export(1);break;
		case 9:return;
		default:break;
	}
	if(choice>0&&choice<6)
	{printf("\n");
   printf("                                    ����������������� 'y'/'Y'");
	fflush(stdin);
	scanf("%c",&ag); 		
	}
	
}while(ag=='y'||ag=='Y'); 
}

if(i==-1)
{
do{ printf("\n\n");
    printf("                                     ֧������                        \n\n");
    printf("                     1.���           2.��ѯ           3.�޸�\n\n");
    printf("                     4.��ʾ           5.ɾ��           6.����վ\n\n");
    printf("                     7.����           8.����           9.������ҳ��\n\n");
    printf("                                                 \n\n"); 
    printf("                     ��ѡ��");
	scanf("%d",&choice);
	read(-1);
	switch(choice)
	{
		case 1:add(-1);save(-1);break;
		case 2:search(-1);break;
		case 3:update(-1);save(1);break;
		case 4:show(-1);break;
		case 5:delet(-1);save(-1);break;
		case 6:recycle(-1);break;
		case 7:sort(-1);save(-1);break;
		case 8:return;
		default:break;
	}
	if(choice>0&&choice<6)
	{
	 printf("\n");
   printf("                                    ����������֧������ 'y'/'Y'");
	fflush(stdin);
	scanf("%c",&ag); 		
	}
	
}while(ag=='y'||ag=='Y'); 
}


if(i==2)
{  
do{ 
    printf("                                    ͳ��                            \n\n");
    printf("                 1.��ʱ��ͳ������            2.��ʱ��ͳ��֧��\n\n");
    printf("                 3.����Աͳ������            4.����Աͳ��֧��\n\n");
    printf("                 5.����עͳ������            6.����עͳ��֧��\n\n"); 
    printf("                 7.ͳ��������                8.ͳ����֧��\n\n"); 
    printf("                 9.ͳ�Ƶ�ǰ����              10.������ҳ��\n\n");
	printf("                 11.��ʱ���ͳ������\n\n"); 
    printf("                 ��ѡ��:");
	scanf("%d",&choice);printf("\n\n");
	switch(choice)
	{
		case 1:read(1);all(2);break;
		case 2:read(-1);all(-2);break;
		case 3:read(1);all(3);break;
		case 4:read(-1);all(-3);break;
		case 5:read(1);all(4);break;
		case 6:read(-1);all(-4);break;
		case 7:read(1);all(1);break;
		case 8:read(-1);all(-1);break;
		case 9:read(1);money=all(1);
		       read(-1);outmoney=all(-1);
				printf("\n\n                     ��ǰ����Ϊ��%.2fԪ",money-outmoney);
				//�������� ��������� 
		case 10:return;
		case 11:read(1);all(5);break;
		
		default:break;
	}
	if(choice>0&&choice<6)
	{
	 printf("\n");
   printf("                                    ����������ͳ�� 'y'/'Y'");
	fflush(stdin);
	scanf("%c",&ag); 		
	}
	
}while(ag=='y'||ag=='Y'); 
}
}