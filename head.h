#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>
#include <time.h>
struct family
{
	int year;
	int month;
	int day;
	char name[20];
	char money[20];
	char outmoney[20];//其实这里money和outmoney只需要一个 当时想的是一张链表 结果最后做成了两张链表 
	char detail[20];
	int  arrange;
};
struct list1
{
   struct family info1;
   struct list1 *next;
};
//这方法比较笨 多了一张链表 其实可以把用户信息放上个链表的头结点 比如name放用户名 detail放密码 
struct userinfo
{
  char usename[10]; 
  char password[10];
  char security[10];
};
struct list2
{
   struct userinfo info2;
   struct list2 *next;
};
void readusename();
void saveusename();
void login();
void registe();
void loginmodify();
void getpassword();
void homepage();
void menu(int i);
void read(int i);
void save(int i);
void add(int i);
void search(int i);
void update(int i);
void show(int i);
void delet(int i);
float all(int i);
void sort(int i);
void export(int i);
void recycle(int i); 

