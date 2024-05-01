# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/12 18:26:45 by glacroix          #+#    #+#              #
#    Updated: 2024/05/01 19:12:35 by glacroix         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Macos Colors
# **************************************************************************** #
RESET  		= \x1B[0m
RED  		= \x1B[31m
GREEN  		= \x1B[32m
YELLOW  	= \x1B[33m
BLUE 		= \x1B[34m
MAGENTA 	= \x1B[35m
CYAN  		= \x1B[36m
WHITE  		= \x1B[37m

#Linux Colors
# **************************************************************************** #
L_RESET  		= '\033[0m'
L_RED			= '\033[0;31m'
L_GREEN			= '\033[0;32m'
L_YELLOW  		= '\033[1;33m'
L_MAG 			= '\033[0;35m' 
L_CYAN  		= '\033[0;36m'
L_WHITE  		= '\033[1;37m'

#Program
# **************************************************************************** #
NAME			= zombiehordessss

#Execution
# **************************************************************************** #
CC				= c++
CFLAGS			= -Wall -Wextra -Werror -std=c++98 
#CFLAGS			+= -g3 -fsanitize=address

#SRC Details
# **************************************************************************** #
SRCS			= main.cpp Zombie.cpp zombieHorde.cpp
OBJS            = $(SRCS:%.cpp=objs/%.o)

#SRC & BONUS SRC Executions
# **************************************************************************** #
$(NAME): objs $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo $(L_MAG) "\n~~~~ zombiehordessss compiled! ~~~~~~~\n" $(L_RESET)

#Makefile Commands
# **************************************************************************** #
all: $(NAME)

objs/%.o: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@

objs:
	@mkdir -p objs/

clean:
	@rm -rf objs

fclean: clean
	@rm -f $(NAME)
	@echo $(L_RED) "\n>>>>>>>>>>> deleting object files <<<<<<<<<\n" $(L_RESET)

re: fclean all

.PHONY: all clean fclean re 
