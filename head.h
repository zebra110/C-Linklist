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
	char outmoney[20];//��ʵ����money��outmoneyֻ��Ҫһ�� ��ʱ�����һ������ �������������������� 
	char detail[20];
	int  arrange;
};
struct list1
{
   struct family info1;
   struct list1 *next;
};
//�ⷽ���Ƚϱ� ����һ������ ��ʵ���԰��û���Ϣ���ϸ������ͷ��� ����name���û��� detail������ 
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

