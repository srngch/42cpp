# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/17 00:46:02 by sarchoi           #+#    #+#              #
#    Updated: 2022/05/24 18:39:20 by sarchoi          ###   ########seoul.kr   #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re $(NAME)

NAME = megaphone

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = megaphone.cpp

OBJS = $(SRCS:.cpp=.o)

green:=$(shell tput setaf 2)
reset:=$(shell tput sgr0)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS)
	$(info $(green)<MAKE> NAME$(reset))

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
	$(info $(green)<MAKE> $(<) -> $(@)$(reset))

clean:
	@rm -f $(OBJS)
	$(info $(green)<MAKE> clean$(reset))

fclean: clean
	@rm -f $(NAME)
	$(info $(green)<MAKE> fclean$(reset))

re: fclean all
	$(info $(red)<MAKE> re$(reset))
