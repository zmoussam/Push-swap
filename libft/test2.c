
#include<stdlib.h>
#include<stdio.h>
void change_pointer(int **p,int *py)
{
	*p = py;
}
int main()
{
	int y = 7;
	int x;
	int *p;
	x = 3;
	p = &x;
	printf("%d\n", *p);
	change_pointer(&p, &y);
	printf("%d\n", *p);

}