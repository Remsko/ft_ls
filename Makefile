NAME = ft_ls
CC = gcc
RM = rm -rf
CFLAGS = -Wall -Werror -Wextra
CPPFLAGS = -I./incs
LIBFT = libft/libft.a
LIBLST = liblst/liblst.a

SRC_PATH = srcs/
SRC_NAME =	main.c \
			\
			parsing/parsing_arg.c \
			parsing/parsing_options.c \
			\
			process/process_filling.c \
			process/process_dir.c \
			process/process_sort.c \
			\
			display/display_list.c \
			display/display_file.c \
			display/display_directory.c \
			display/display_infos.c \
			display/display_time.c \
			display/display_link.c \
			display/display_size.c \
			display/display_gid.c \
			display/display_uid.c \
			display/display_mode.c \
			\
			error/error_usage.c \
			error/error_malloc.c \
			error/error_directory.c \
			error/error_stat.c \
			\
			infos/infos_gid.c \
			infos/infos_uid.c \
			infos/infos_mode.c \
			infos/infos_permi.c \
			infos/infos_time.c \
			infos/infos_type.c \
			\
			new/new_infos.c \
			new/new_target.c \
			new/new_path.c \
			new/new_directory.c \
			\
			cmp/cmp_file.c \
			cmp/cmp_file_time.c \
			cmp/cmp_dir.c \
			cmp/cmp_dir_time.c \

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
	mkdir -p $(OBJ_PATH)infos
	mkdir -p $(OBJ_PATH)cmp

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
