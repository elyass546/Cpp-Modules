NAME = PhoneBook

CC = @c++

CFLAGS = -Wall -Werror -Wextra -std=c++98

FILE = Contact.cpp main.cpp PhoneBook.cpp

RM = @rm -f

C_RED = \033[1;31m
C_GREEN = \033[1;32m
C_L_BLUE = \033[1;34m
C_RES = \033[0m

all : $(NAME)

$(NAME) : $(FILE)
	@echo "$(C_GREEN)["PhoneBook" CREATED]$(C_RES)"
	$(CC) $(CFLAGS) $(FILE) -o $(NAME)

clean :
	$(RM) $(NAME)
	@echo "$(C_RED)["PhoneBook" REMOVED]$(C_RES)"

fclean : clean

re : fclean all