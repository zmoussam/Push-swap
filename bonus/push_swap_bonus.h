/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 23:48:17 by zmoussam          #+#    #+#             */
/*   Updated: 2022/08/13 23:50:56 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include "../libft/libft.h"
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
short	check_is_sort(t_stack *stack);

#endif