# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agutierr <agutierr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/28 14:36:46 by agutierr          #+#    #+#              #
#    Updated: 2021/02/05 20:00:53 by agutierr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libasm.a

SRCS = ft_strlen.s ft_strcpy.s

OBJS = ft_strlen.o ft_strcpy.o

INCLUDES = ./

all:$(NAME)

$(NAME):$(SRCS) libasm.h
		/Users/agutierr/.brew/bin/nasm -f macho64 ft_strlen.s
		/Users/agutierr/.brew/bin/nasm -f macho64 ft_strcpy.s
		gcc main.c $(OBJS)
		ar rc $(NAME) $(OBJS)
		ranlib $(NAME)
compile:	fclean all
		clear && ./a.out
clean:
		$(RM) $(OBJS)
fclean:		clean
		$(RM) $(NAME)
re:			fclean all