# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agutierr <agutierr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/28 14:36:46 by agutierr          #+#    #+#              #
#    Updated: 2021/02/22 18:55:32 by agutierr         ###   ########.fr        #
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
		gcc $(FLAGS) $(OBJS) main.c -o libasm
		@echo "\033[1;32m*********************"
		@echo "\e[93m***** \e[5mCompilao \e[25m******"
		@echo "\e[31m*********************"
		@echo "\033[0m"



compile:	fclean all
		clear && ./libasm

clean:
		$(RM) $(OBJS)
		rm libasm

fclean:		clean
		$(RM) $(NAME)

re:			fclean all