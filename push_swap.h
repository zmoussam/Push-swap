/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 17:33:04 by zmoussam          #+#    #+#             */
/*   Updated: 2022/08/13 18:08:27 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include<stdlib.h>
# include<stdio.h>
# include<stdio.h>
# include<unistd.h>

typedef struct s_stack{
	int				data;
	int				index;
	int				range;
	char			*binary;
	int				v;
	struct s_stack	*next;
}t_stack;

t_stack	*empiler(char **argv, int argc);
void	arg_isdigit(char **argv, int argc);
void	print_error(void);
void	is_repeat(t_stack *stack_a);
void	swap(t_stack *stack, char *inst);
void	ss(t_stack *stack_a, t_stack *stack_b);
void	push(t_stack **stack_dst, t_stack **stack_src, char *inst);
void	rotate(t_stack **stack, char *inst);
void	reverse_rotate(t_stack **stack, char *inst);
void	rrr(t_stack **stack_a, t_stack **stack_b);
int		ft_lstsize(t_stack *lst);
void	sort_short_list(t_stack **stack_a, t_stack **stack_b, int size);
short	check_is_sort(t_stack *stack);
void	sort_size3(t_stack **stack_a);
void	get_index(t_stack *stack);
void	ft_swap(int *a, int *b);
void	get_range(t_stack *stack);
void	init_v_and_range(t_stack *stack);
void	sort_size4(t_stack **stack_a, t_stack **stack_b);
void	sort_size5(t_stack **stack_a, t_stack **stack_b);
char	*range_to_binary(void *buf);
void	radix_sort(t_stack **stack_a, t_stack **stack_b);
int		get_binary_of_range(t_stack *stack_a);
void	rr(t_stack **stack_a, t_stack **stack_b);

#endif
