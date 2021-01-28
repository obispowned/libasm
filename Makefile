# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agutierr <agutierr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/28 14:36:46 by agutierr          #+#    #+#              #
#    Updated: 2021/01/28 14:39:34 by agutierr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libasm.a

SRCS = ft_strlen.s

OBJS = $(SRCS:.c=.o)

INCLUDES = ./

all:$(NAME)

$(NAME):$(SRCS) libasm.h
		gcc -Wall -Werror -Wextra -I$(INCLUDES) -c $(SRCS)
		ar rc $(NAME) $(OBJS)
		ranlib $(NAME)

clean:
		$(RM) $(OBJS)
fclean:		clean
		$(RM) $(NAME)
re:			fclean all