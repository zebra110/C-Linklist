#include "head.h"
void homepage()
{	int num;
	while(1) 
{   printf("\n\n");
    printf("                 ---------------------��ҳ��------------------------\n\n");
    printf("                                    1.�������                    \n\n");
    printf("                                    2.֧������                    \n\n");
    printf("                                    3.ͳ��                        \n\n");
    printf("                                    4.�˳�ϵͳ                    \n\n");
    printf("                 ---------------------------------------------------\n\n");
    printf("                                    ��ѡ��:");
    fflush(stdin);
	 scanf("%d",&num);
    switch(num)
    {
		 case 1:menu(1);break;
	    case 2:menu(-1);break;
	    case 3:menu(2);break;
	    case 4:exit(0);break;
    	 default:printf("\n\n");printf("           \t����1-4֮��ѡ��!\n");
	}}
}