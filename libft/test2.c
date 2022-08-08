
#include<stdlib.h>
#include<stdio.h>
void change_pointer(int **p,int *py)
{
	*p = py;
}
void sum(int **p, int *y)
{
	*p = y;
}
int main()
{
	int x;
	int y;
	int *p2;
	y = 5;

	x = 9;
	int *p = &x;
	p2 = &y;
	sum(&p, p2);
	printf(" x = %d *p = %d", x, *p);
	unsigned int ;
	write(5, "e30", 3);
}