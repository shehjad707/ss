#include<stdio.h>
void sum();
int main()
{
	printf("in main...\n");
	sum();
}
void sum()
{
	printf("in sum...\n");
	int x=10,y=20,res;
	printf("res=%d\n",x+y);
}
