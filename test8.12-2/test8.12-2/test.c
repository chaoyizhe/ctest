#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define app 10
#define ADD(x,y) ((x)+(y))

struct stu
{
	char class[20];
	char name[20];
	int age;
	char tele[30];
};
typedef struct stu ST;

void print(ST* ps)
{
	printf("%s %s %d %s\n", ps->class,ps->name,ps->age,ps->tele);
	printf("%s %s %d %s\n", (*ps).class,(*ps).name,(*ps).age,(*ps).tele);
}
int main()
{
	int n = app;
	printf("%d\n", n);
	int arr[app] = { 0 };

	int a = 2;
	int b = 3;
	int c = ADD(a, b);
	printf("%d\n", c);
	int v = 10;
	&v;
	int* p = &v;
	*p = 20;
	printf("%d\n", v);

	printf("%zu\n", sizeof(char*));
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(long*));
	printf("%d\n", sizeof(float*));

	ST s = {"2401","уехЩ",18,"1008611"};
	print(&s);

	return 0;
}