#include "head.h"
void menu(int i)
{   
    
   int choice;float money,outmoney;
	char ag;
	if(i==1)
{
do{ printf("\n\n");
    printf("                                      收入管理                        \n\n");
    printf("                     1.添加           2.查询           3.修改\n\n");
    printf("                     4.显示           5.删除           6.回收站\n\n");
    printf("                     7.排序           8.导出           9.返回主页面\n\n");
    printf("                     请选择：");
	scanf("%d",&choice);
	read(1);//用户重新选择时 重新读取一次 保证数据更新 
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
   printf("                                    若继续进行收入管理 'y'/'Y'");
	fflush(stdin);
	scanf("%c",&ag); 		
	}
	
}while(ag=='y'||ag=='Y'); 
}

if(i==-1)
{
do{ printf("\n\n");
    printf("                                     支出管理                        \n\n");
    printf("                     1.添加           2.查询           3.修改\n\n");
    printf("                     4.显示           5.删除           6.回收站\n\n");
    printf("                     7.排序           8.导出           9.返回主页面\n\n");
    printf("                                                 \n\n"); 
    printf("                     请选择：");
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
   printf("                                    若继续进行支出管理 'y'/'Y'");
	fflush(stdin);
	scanf("%c",&ag); 		
	}
	
}while(ag=='y'||ag=='Y'); 
}


if(i==2)
{  
do{ 
    printf("                                    统计                            \n\n");
    printf("                 1.按时间统计收入            2.按时间统计支出\n\n");
    printf("                 3.按成员统计收入            4.按成员统计支出\n\n");
    printf("                 5.按备注统计收入            6.按备注统计支出\n\n"); 
    printf("                 7.统计总收入                8.统计总支出\n\n"); 
    printf("                 9.统计当前结余              10.返回主页面\n\n");
	printf("                 11.按时间段统计收入\n\n"); 
    printf("                 请选择:");
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
				printf("\n\n                     当前结余为：%.2f元",money-outmoney);
				//调用两次 计算出结余 
		case 10:return;
		case 11:read(1);all(5);break;
		
		default:break;
	}
	if(choice>0&&choice<6)
	{
	 printf("\n");
   printf("                                    若继续进行统计 'y'/'Y'");
	fflush(stdin);
	scanf("%c",&ag); 		
	}
	
}while(ag=='y'||ag=='Y'); 
}
}