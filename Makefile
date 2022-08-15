# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/14 21:27:40 by zmoussam          #+#    #+#              #
#    Updated: 2022/08/14 23:03:43 by zmoussam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = push_swap
BONUS_NAME = checker
SRC =./mandatory/push_swap.c ./mandatory/instructions/push.c\
			./mandatory/instructions/reverseRotate.c\
			./mandatory/instructions/rotate.c\
			./mandatory/instructions/swap.c\
			./mandatory/parssing/checkArg.c ./mandatory/parssing/pileFunc.c\
			./mandatory/sorting/convertToBinary.c ./mandatory/sorting/radix.c\
			./mandatory/sorting/sortingFunc.c\
			./libft/ft_atoi.c ./libft/ft_isdigit.c ./libft/ft_split.c\
			./libft/ft_strchr.c ./libft/ft_strcmp.c ./libft/ft_strdup.c\
			./libft/ft_strdup2.c ./libft/ft_strjoin.c\
			./libft/ft_strlen.c ./libft/ft_substr.c ./libft/ft_swap.c
BNS_SRC =./bonus/push_swap_bonus.c
				./bonus/check_sort/check_inst.c\
				./bonus/check_sort/do_inst.c\
				./bonus/get_next_line/get_next_line.c\
				./bonus/instructions/push.c\
				./bonus/instructions/reveseRotate.c\
				./bonus/instructions/rotate.c\
				./bonus/instructions/swap.c\
				./bonus/parssing_bonus/checkArg.c\
				./bonus/parssing_bonus/pileFunc.c\
				./libft/ft_atoi.c ./libft/ft_isdigit.c ./libft/ft_split.c\
				./libft/ft_strchr.c ./libft/ft_strcmp.c ./libft/ft_strdup.c\
				./libft/ft_strdup2.c  ./libft/ft_strjoin.c\
				./libft/ft_strlen.c ./libft/ft_substr.c ./libft/ft_swap.c
OBJ = ${SRC:.c=.o}
BOBJ = ${BNS_SRC:.c=.o}
CC = cc
RM = rm -rf
CFLAGS =  -Wall -Wextra -Werror

all: $(NAME)

%.o:%.c *.h
	@$(CC) -c  $(CFLAGS) $<
	
$(NAME): $(OBJ) ./mandatory/push_swap.h ./libft/libft.h
	@$(CC) $(CFLAGS) $(SRC) -o $(NAME)
	@echo "Compiling Successfull"

bonus: $(BONUS_NAME)
 
$(BONUS_NAME) : $(BOBJ) ./bonus/push_swap_bonus.h ./libft/libft.h
	@$(CC) $(CFLAGS) $(BNS_SRC) -o $(BONUS_NAME)
	@echo "Compiling Successfull"
	
	
clean:
	@$(RM) $(OBJ) $(BOBJ)
	@echo "Object Files Removed Successfully"

fclean:clean
	@$(RM) all
	@echo "Clear"

re: fclean all