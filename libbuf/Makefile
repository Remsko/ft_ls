NAME = libbuf.a
CC = gcc
RM = rm -rf
CFLAGS = -Wall -Werror -Wextra
CPPFLAGS = -I./incs

SRC_PATH = srcs/
SRC_NAME = buffer_copy.c \
			buffer_clear.c \
			buffer_empty.c \
			buffer_print.c \
			buffer_loop.c \

SRC = $(addprefix $(SRC_PATH),$(SRC_NAME))

OBJ_PATH = objs/
OBJ_NAME = $(SRC_NAME:.c=.o)
OBJ = $(addprefix $(OBJ_PATH),$(OBJ_NAME)) 

all: $(NAME)

$(OBJ_PATH):
	mkdir -p $(OBJ_PATH)

$(NAME): $(OBJ_PATH) $(OBJ)
	ar -rc $(NAME) $(OBJ)
	@echo $(NAME) ✔

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	$(CC) $(CFLAGS) $(CPPFLAGS) -o $@ -c $<

clean:
	$(RM) $(OBJ)
	$(RM) $(OBJ_PATH)

fclean: clean
	$(RM) $(NAME)

re: fclean all