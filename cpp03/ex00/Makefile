# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sarchoi <sarchoi@student.42seoul.kr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/01 21:29:08 by sarchoi           #+#    #+#              #
#    Updated: 2022/06/07 18:39:56 by sarchoi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re $(NAME)

NAME = clapTrap

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp ClapTrap.cpp
OBJS = $(SRCS:.cpp=.o)

green:=$(shell tput setaf 2)
reset:=$(shell tput sgr0)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -I . -o $@ $(OBJS)
	$(info $(green)<MAKE> NAME$(reset))

%.o: %.cpp
	$(CC) $(CFLAGS) -I . -c $< -o $@
	$(info $(green)<MAKE> $(<) -> $(@)$(reset))

clean:
	@rm -f $(OBJS)
	$(info $(green)<MAKE> clean$(reset))

fclean: clean
	@rm -f $(NAME)
	$(info $(green)<MAKE> fclean$(reset))

re: fclean all
	$(info $(red)<MAKE> re$(reset))
