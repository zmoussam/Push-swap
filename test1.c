#include<stdio.h>
typedef struct test{
    int x;
    char c;
} test;
int main ()
{
    test x;
    x.x = 4;
    x.c = 'c';
    printf("%x\n",&x);
    printf("%x\n",&(x.x));
    printf("%x\n",&(x.c));
}