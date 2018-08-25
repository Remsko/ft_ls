NAME = ft_ls
CC = gcc
RM = rm -rf
CFLAGS = -Wall -Werror -Wextra
CPPFLAGS = -I./incs
LIBFT = libft/libft.a
LIBLST = liblst/liblst.a

SRC_PATH = srcs/
SRC_NAME = main.c \
			parsing/parsing_arg.c \
			parsing/parsing_options.c \
			process/process_filling.c \
			process/process_dir.c \
			display/display_list.c \
			error/error_usage.c \
			error/error_malloc.c \
			error/error_directory.c \
			new/new_object.c \

SRC = $(addprefix $(SRC_PATH),$(SRC_NAME))

OBJ_PATH = obj/
OBJ_NAME = $(SRC_NAME:.c=.o)

OBJ = $(addprefix $(OBJ_PATH),$(OBJ_NAME))

CPPFLAGS = -Iincs -Ilibft -Iliblst/incs
LDFLAGS = -Llibft -Lliblst
LDLIBS = -lft -llst

all: $(NAME)

$(LIBLST):
	make -C liblst

$(LIBFT):
	make -C libft

$(OBJ_PATH):
	mkdir -p $(OBJ_PATH)parsing
	mkdir -p $(OBJ_PATH)error
	mkdir -p $(OBJ_PATH)process
	mkdir -p $(OBJ_PATH)display
	mkdir -p $(OBJ_PATH)new

$(NAME): $(LIBLST) $(LIBFT) $(OBJ_PATH) $(OBJ)
	$(CC) $(OBJ) $(LDFLAGS) $(LDLIBS)  -o $(NAME)

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	$(CC) $(CFLAGS) $(CPPFLAGS) -o $@ -c $<

clean:
	make clean -C liblst
	make clean -C libft
	$(RM) $(OBJ)
	$(RM) $(OBJ_PATH)

fclean: clean
	$(RM) $(LIBLST)
	$(RM) $(LIBFT)
	$(RM) $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
