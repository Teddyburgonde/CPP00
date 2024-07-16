#=================== NAME ===================#

NAME = megaphone

#================ COMPILATOR ================#
CC = c++

#=================== FLAGS ==================#

CFLAGS = -Wall -Wextra -Werror -std=c++98

#================ COLORS ================#

GREEN = \033[32m
RESET = \033[0m

#================ UTILS PART ================#

RM = rm -f

all: $(NAME)

$(NAME) : $(OBJS)
	@$(CC) $(CFLAGS) megaphone.cpp -o $(NAME)
	@printf "$(GREEN) EXECUTABLE READY !$(RESET)\n"

clean: 
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME) 

re: fclean all

.PHONY: all clean fclean re 
