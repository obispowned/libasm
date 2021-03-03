# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agutierr <agutierr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/28 14:36:46 by agutierr          #+#    #+#              #
#    Updated: 2021/03/03 20:11:27 by agutierr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libasm.a

SRCS = $(wildcard *.s)
OBJS = $(SRCS:%.s=%.o)

FLAGS = -g -Wall -Werror -Wextra

######################################
detected_OS := $(shell sh -c 'uname 2>/dev/null || echo Unknown')
ifeq ($(detected_OS), Darwin)
	LIBASM_FLAG = /Users/agutierr/.brew/bin/nasm -f macho64
endif
ifeq ($(detected_OS), Linux)
	LIBASM_FLAG = nasm -f elf64
endif
######################################

INCLUDES = ./

%.o: %.s
		@echo "\e[35mGenerando binario..."
		$(LIBASM_FLAG) $^ -o $@

all:$(NAME)

$(NAME):$(OBJS)
		@echo "[1;32mGenerando libreria..."
		ar rc $(NAME) $(OBJS)
		gcc $(FLAGS) $(OBJS) -L. -lasm main.c -o libasm
		@echo "*********************"
		@echo "***** Compilao ******"
		@echo "*********************"

compile:	fclean all
		clear && ./libasm

clean:
		$(RM) $(OBJS)

fclean:		clean
		$(RM) $(NAME)

re:			fclean all