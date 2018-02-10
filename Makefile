##
## EPITECH PROJECT, 2018
## Search Number Game Makefile
## File description:
## 
##

NAME	= program

CC	= gcc

RM	= rm -f

SRCS	= ./src/my_putchar.c \
	  ./src/my_putnbr.c \
	  ./src/search-number-game.c 

OBJS	= $(SRCS:.c=.o)

CFLAGS = -I ./include/
CFLAGS += -W -Wall -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	 $(CC) $(OBJS) -o $(NAME) $(LDFLAGS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
