#include "head.h"
int h;         //ȫ�ֱ���hΪ��Ϣ������
char s[20];    //ȫ�ֱ���sΪ�û����˺� ͬʱҲ��һ��һ���ļ��� 
struct list1 *head=NULL;
struct list1 *rear=NULL;
struct list1 *outhead=NULL;
struct list1 *outrear=NULL;
//ʹ������������ �ֱ��ʾ����֧��  βָ����ʵֻҪ����һ�� q=head q!=null q=q->next q����βָ���� ���Ǳ���Ч�ʵ� 
struct list2 *usehead=NULL;
struct list2 *userear=NULL;
//�˻���¼������ 
int main()
{ 
   int num,ff=1;//ff���ڿ���ѭ�� 
   printf("                 ------------- ��ӭʹ�ü�ͥ�������ϵͳ ------------- \n");
   printf("                                                                     \n");
   printf("                                    1.��¼                           \n");
   printf("                                                                     \n");
   printf("                                    2.ע��                           \n");
   printf("                                                                     \n");
   printf("                                    3.�����޸�                       \n");
   printf("                                                                     \n");
   printf("                                    4.�һ�����                       \n");
   printf("                                                                     \n");
   printf("                 ----------------------------------------------------\n");
   while(ff)
	{readusename();
	printf("\n");
	printf("                                    ��ѡ��:"); 
   fflush(stdin);
	scanf("%d",&num);
   switch(num)
 {
 	case 1:ff=0;login();break;
 	case 2:ff=0;registe();break;
	case 3:ff=0;loginmodify();break;
	case 4:ff=0;getpassword();break; 
 	default:printf("                                     ����1-4֮��ѡ��!\n");ff=1;
 }}
   return 0;
}

