#include<stdio.h>
void sum();
void sub();
int main()
{
	printf("in main...\n");
	sum();
	sub();
}
void sum()
{
	printf("in sum...\n");
	int x=10,y=20,res;
	printf("res=%d\n",x+y);
}
void sub()
{
	printf("in sub...\n");
	int x=20,y=10,res;
	printf("res=%d\n",x-y);
}
