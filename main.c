/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 17:31:53 by zmoussam          #+#    #+#             */
/*   Updated: 2022/07/28 17:31:53 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"
int getBinaryOfRange(s_stack *stack_a)
{
    int max;
    int max_bit;
    s_stack *head;

    head = stack_a;
    max = ft_lstsize(stack_a) - 1;
    max_bit = ft_strlen(ft_strchr(rangeToBinary(&max), '1'));
    while(head)
    {
        head->binary = ft_strdup(rangeToBinary(&(head->range)), max_bit);
        head = head->next;
    }
    return (max_bit);
}
void radixSort(s_stack **stack_a, s_stack **stack_b)
{
   int max_bit;
   int i;
   s_stack *head;

   max_bit = getBinaryOfRange(*stack_a);
   i = max_bit - 1;
   while(i >= 0)
   {

       i--;
   }


}
int main(int argc, char **argv)
{
    s_stack *stack_a;
    s_stack *stack_b; 
    int size_a;
    s_stack *head;
    int max;
    int max_bit;

    stack_b = (s_stack*)malloc(sizeof(s_stack));
    stack_b->data = 5;
    stack_b->next = NULL;
    if(argc > 1)
    {
        argIsdigit(argv, argc);
        stack_a = empiler(argv, argc);
        isRepeat(stack_a);
        if(checkIsSort(stack_a))
            exit(0);
        getRange(stack_a);
        if(ft_lstsize(stack_a) <= 5)
            sortShortList(&stack_a, &stack_b, ft_lstsize(stack_a));
        else
            radixSort(&stack_a, &stack_b);
    }
//     int size = 0;
//     long max = 700;
//     size = ft_strlen(ft_strchr(rangeToBinary(&max), '1'));
//     printf("size = %d\n", size);
//     int x = 700;
//     int y = 800;
//     int z = 900;
//     printf("%s\n", ft_strdup(rangeToBinary(&x), size));
//     printf("%s\n", ft_strdup(rangeToBinary(&y), size));
//     printf("%s\n", ft_strdup(rangeToBinary(&z), size));
    // swap(stack_a, "sa\n");
    // push(&stack_b, &stack_a, "pb\n");
    // push(&stack_b, &stack_a, "pb\n");
    // push(&stack_b, &stack_a, "pb\n");
    // swap(stack_a, "sa\n");
    // push(&stack_a, &stack_b, "pa\n");
    // push(&stack_a, &stack_b, "pa\n");
    // push(&stack_a, &stack_b, "pa\n");
    // reverseRotate(&stack_a, "rra\n");
    // reverseRotate(&stack_a, "rra\n");
    // reverseRotate(&stack_a, "rra\n");
    // swap(stack_a, "sa\n");
    // reverseRotate(&stack_a, "rra\n");
    // rotate(&stack_a, "ra\n");
    // swap(stack_a, "sa\n");
    //reverseRotate(&stack_a, "rra\n");
    //reverseRotate(&stack_a, "rra\n");
    // rotate(&stack_a, "ra\n");
    // rotate(&stack_a, "ra\n");
    // rotate(&stack_a, "ra\n");
    // rotate(&stack_a, "ra\n");
    // rotate(&stack_a, "ra\n");
    // rotate(&stack_a, "ra\n");
    // rotate(&stack_a, "ra\n");
    head = stack_a;
    while(head)
    {
        printf("data = %d  index = %d range = %d binaryRange = %s\n", head->data,head->index, head->range, head->binary); 
        head = head->next;
    }
}
