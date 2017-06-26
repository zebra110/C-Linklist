#include "head.h"
int h;         //全局变量h为信息的条数
char s[20];    //全局变量s为用户的账号 同时也是一对一的文件名 
struct list1 *head=NULL;
struct list1 *rear=NULL;
struct list1 *outhead=NULL;
struct list1 *outrear=NULL;
//使用了两张链表 分别表示收入支出  尾指针其实只要遍历一下 q=head q!=null q=q->next q就是尾指针啦 但是遍历效率低 
struct list2 *usehead=NULL;
struct list2 *userear=NULL;
//账户登录的链表 
int main()
{ 
   int num,ff=1;//ff用于控制循环 
   printf("                 ------------- 欢迎使用家庭财务管理系统 ------------- \n");
   printf("                                                                     \n");
   printf("                                    1.登录                           \n");
   printf("                                                                     \n");
   printf("                                    2.注册                           \n");
   printf("                                                                     \n");
   printf("                                    3.密码修改                       \n");
   printf("                                                                     \n");
   printf("                                    4.找回密码                       \n");
   printf("                                                                     \n");
   printf("                 ----------------------------------------------------\n");
   while(ff)
	{readusename();
	printf("\n");
	printf("                                    请选择:"); 
   fflush(stdin);
	scanf("%d",&num);
   switch(num)
 {
 	case 1:ff=0;login();break;
 	case 2:ff=0;registe();break;
	case 3:ff=0;loginmodify();break;
	case 4:ff=0;getpassword();break; 
 	default:printf("                                     请在1-4之间选择!\n");ff=1;
 }}
   return 0;
}

