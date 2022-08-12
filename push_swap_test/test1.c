#include<stdio.h>
#include<stdlib.h>
#include "../push_swap.h"


int main()
{
    s_stack *head1;
    s_stack *head2;
    s_stack *head3;
    s_stack *head4;
    s_stack *headd1;
    s_stack *headd2;
    s_stack *headd3;
    s_stack *headd4;
    s_stack *tmp;
    s_stack *tmpp;
    
    head1 = (s_stack *)malloc(sizeof(s_stack));
    head2 = (s_stack *)malloc(sizeof(s_stack));
    head3 = (s_stack *)malloc(sizeof(s_stack));
    head4 = (s_stack *)malloc(sizeof(s_stack));
    headd1 = (s_stack *)malloc(sizeof(s_stack));
    headd2 = (s_stack *)malloc(sizeof(s_stack));
    headd3 = (s_stack *)malloc(sizeof(s_stack));
    headd4 = (s_stack *)malloc(sizeof(s_stack));

    head1->data = 1;
    head2->data = 2;
    head3->data = 3;
    head4->data = 4;

    headd1->data = 1;
    headd2->data = 2;
    headd3->data = 3;
    headd4->data = 4;

    head1->next = head2;
    head2->next = head3;
    head3->next = head4;
    head4->next = NULL;

    headd1->next = headd2;
    headd2->next = headd3;
    headd3->next = headd4;
    headd4->next = NULL;

    rr(&head1, &headd1);
    rr(&head1, &headd1);
    rr(&head1, &headd1);
    tmp = head1;
    tmpp = headd1;
    printf("(1) -- >");
    while(tmp)
    {   
        printf("  %d", tmp->data);
        tmp = tmp->next;
    }
    printf("%s","\n");
    printf("(2) -- >");
    while(tmpp)
    {
        printf("  %d", tmpp->data);
        tmpp = tmpp->next;
    }
}