#include<stdio.h>
//struct Point
//{
//	int x; 
//	int y;
//};
//struct Node
//{
//	int data;
//	struct Point p;
//	struct Node *nect;
//};
//int main()
//{
//	struct Node d1 = { 10,{4,5},NULL };
//	printf("%d\n", d1.data);
//	printf("%d,%d\n", d1.p.x,d1.p.y);
//	printf("%d\n", d1.nect);
//	return 0;
//}

struct Stu
{
	char name[30];
	int sno;
	char class[30];
};
void Print1(struct Stu s)
{
	printf("%s ", s.name);
	printf("%d ", s.sno);
	printf("%s\n", s.class);
}
void Print2(struct Stu* ps)
{
	printf("%s ", ps->name);
	printf("%d ", ps->sno);
	printf("%s\n", ps->class);
}

int main()
{
	struct Stu s = { "wl",2052500108,"wlw" };
	Print1(s);
	Print2(&s);

	return 0;
}