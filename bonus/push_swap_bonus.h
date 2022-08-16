/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 23:48:17 by zmoussam          #+#    #+#             */
/*   Updated: 2022/08/16 20:53:12 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include "../libft/libft.h"
# include "./get_next_line/get_next_line.h"
# include <unistd.h>
# include <stdio.h>

typedef struct s_stack{
	int				data;
	struct s_stack	*next;
}t_stack_b;

void		push(t_stack_b **stack_dst, t_stack_b **stack_src);
void		reverse_rotate(t_stack_b **stack);
void		rrr(t_stack_b **stack_a, t_stack_b **stack_b);
void		rotate(t_stack_b **stack);
void		rr(t_stack_b **stack_a, t_stack_b **stack_b);
void		swap(t_stack_b *stack);
void		ss(t_stack_b *stack_a, t_stack_b *stack_b);
void		check_inst(char *inst, t_stack_b **stack_a, t_stack_b **stack_b);
void		arg_isdigit(char **argv, int argc);
void		is_repeat(t_stack_b *stack_a);
t_stack_b	*empiler(char **argv, int argc);
short		check_is_sort(t_stack_b *stack);
void		do_inst(t_stack_b **stack_a, t_stack_b **stack_b, char *inst);
int			ft_lstsize(t_stack_b *lst);
t_stack_b	*ft_addfront(t_stack_b **stack, int data);
void		ft_lstclear(t_stack_b **lst);

#endif
