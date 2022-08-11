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
   int size_b;
   int j;
   int size_a;
    size_a = 0;
   head = *stack_a;

   max_bit = getBinaryOfRange(*stack_a);
   i = max_bit - 1;
   while(i >= 0)
   {
       //head = *stack_a;
       size_a = ft_lstsize(*stack_a);
       while(size_a > 0)
       {
           // printf("i = %d\n", i);
           if((*stack_a)->binary[i] == '0')
                push(stack_b, stack_a, "pb\n");
           else if ((*stack_a)->binary[i] == '1')
                rotate(stack_a, "ra\n");
            // printf("%s\n", "its me");
            size_a--;
       }
       size_b = ft_lstsize(*stack_b);
       j = 1;
        while(j < size_b)
        {
            push(stack_a, stack_b, "pa\n");
            j++;
        }
       i--;
   }
}
int main(int argc, char **argv)
{
    s_stack *stack_a;
    s_stack *stack_b;
    int size_a;
    s_stack *head;
    s_stack *head2;
    int max;
    int max_bit;

    stack_b = (s_stack*)malloc(sizeof(s_stack));
    if(argc > 1)
    {
        argIsdigit(argv, argc);
        stack_a = empiler(argv, argc);
        isRepeat(stack_a);
        if(checkIsSort(stack_a))
            exit(0);
        getRange(stack_a);
        getBinaryOfRange(stack_a);
        if(ft_lstsize(stack_a) <= 5)
            sortShortList(&stack_a, &stack_b, ft_lstsize(stack_a));
        else
            radixSort(&stack_a, &stack_b);
    }
    //head = stack_a;
    //head2 = stack_b;
    // while(head)
    // {
    //     printf("data = %d  index = %d range = %d binaryRange = %c\n", head->data,head->index, head->range, head->binary[0]); 
    //     head = head->next;
    // }
    // while(head2)
    // {
    //     printf("data2 = %d  index2 = %d range2 = %d binaryRange2 = %s\n", head2->data,head2->index, head2->range, head2->binary); 
    //     head2 = head2->next;
    // }
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
    //head = stack_a;
    // while(head)
    // {
    // push(&stack_b, &stack_a, "pb\n");
    // push(&stack_b, &stack_a, "pb\n");
    // push(&stack_b, &stack_a, "pb\n");
    // head = head->next;
    // }
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