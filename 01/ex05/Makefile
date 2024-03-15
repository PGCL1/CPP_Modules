# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/12 18:26:45 by glacroix          #+#    #+#              #
#    Updated: 2024/03/15 17:43:52 by glacroix         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Colors
# **************************************************************************** #
RESET  		= "\x1B[0m"
RED  		= "\x1B[31m"
GREEN  		= "\x1B[32m"
YELLOW  	= "\x1B[33m"
BLUE 		= "\x1B[34m"
MAGENTA 	= "\x1B[35m"
CAYN  		= "\x1B[36m"
WHITE  		= "\x1B[37m"


#Program
# **************************************************************************** #
NAME			= harl 

#Execution
# **************************************************************************** #
CC				= c++
CFLAGS			= -Wall -Wextra -Werror -std=c++98 
#CFLAGS			+= -g3 -fsanitize=address

#SRC Details
# **************************************************************************** #
SRCS			= main.cpp Harl.cpp
OBJS            = $(SRCS:%.cpp=objs/%.o)

#SRC & BONUS SRC Executions
# **************************************************************************** #
$(NAME): objs $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo $(MAGENTA) "\n~~~~~~~~~~~ harl is ready to complain again! ~~~~~~~~~~~\n" $(RESET)

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
	@echo $(RED) "\n>>>>>>>>>>> deleting object files <<<<<<<<<\n" $(RESET)

re: fclean all

.PHONY: all clean fclean re 
