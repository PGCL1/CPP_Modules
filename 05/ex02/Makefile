# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: glacroix <PGCL>                            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/12 18:26:45 by glacroix          #+#    #+#              #
#    Updated: 2024/06/21 18:35:26 by glacroix         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Colors
# **************************************************************************** #
ifeq ($(shell uname), Linux)
	RESET		= '\033[0m'
	RED			= '\033[0;31m'
	GREEN		= '\033[0;32m'
	YELLOW  	= '\033[1;33m'
	MAGENTA 	= '\033[0;35m' 
	CYAN  		= '\033[0;36m'
	WHITE  		= '\033[1;37m'
else
    RED = "\x1B[31m"
    GREEN = "\x1B[32m"
    YELLOW = "\x1B[33m"
    BLUE = "\x1B[34m"
    MAGENTA = "\x1B[35m"
    CAYN = "\x1B[36m"
    WHITE = "\x1B[37m"
endif

#Program
# **************************************************************************** #
NAME			= form2 

#Execution
# **************************************************************************** #
CC				= c++
CFLAGS			= -Wall -Wextra -Werror -std=c++98 -g3 -fsanitize=address

#SRC Details
# **************************************************************************** #
SRCS			= main.cpp \
				  Bureaucrat.cpp \
				  AForm.cpp

OBJS            = $(SRCS:%.cpp=objs/%.o)

#SRC & BONUS SRC Executions
# **************************************************************************** #
$(NAME): objs $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo $(MAGENTA) "\n~~~~~~~~~ form2 compiled! ~~~~~~~~\n" $(RESET)

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
