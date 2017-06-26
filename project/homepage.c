#include "head.h"
void homepage()
{	int num;
	while(1) 
{   printf("\n\n");
    printf("                 ---------------------主页面------------------------\n\n");
    printf("                                    1.收入管理                    \n\n");
    printf("                                    2.支出管理                    \n\n");
    printf("                                    3.统计                        \n\n");
    printf("                                    4.退出系统                    \n\n");
    printf("                 ---------------------------------------------------\n\n");
    printf("                                    请选择:");
    fflush(stdin);
	 scanf("%d",&num);
    switch(num)
    {
		 case 1:menu(1);break;
	    case 2:menu(-1);break;
	    case 3:menu(2);break;
	    case 4:exit(0);break;
    	 default:printf("\n\n");printf("           \t请在1-4之间选择!\n");
	}}
}