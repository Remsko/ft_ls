NAME = liblst.a
CC = gcc
RM = rm -rf
CFLAGS = -Wall -Werror -Wextra
CPPFLAGS = -I./incs

SRC_PATH = srcs/
SRC_NAME = double/dlist_init.c \
		   double/dlist_new.c \
		   double/dlist_insert.c \
		   double/dlist_add_start.c \
		   double/dlist_add_end.c \
		   double/dlist_delete.c \
		   double/dlist_reverse.c \
		   simple/slist_init.c \
		   simple/slist_new.c \
		   simple/slist_insert.c \
		   simple/slist_add_start.c \
		   simple/slist_add_end.c \
		   simple/slist_delete.c \
		   simple/slist_reverse.c \
		   cyclic/clist_init.c \
		   cyclic/clist_new.c \
		   cyclic/clist_insert.c \
		   cyclic/clist_add_start.c \
		   cyclic/clist_add_end.c \
		   cyclic/clist_delete.c \

SRC = $(addprefix $(SRC_PATH),$(SRC_NAME))

OBJ_PATH = objs/
OBJ_NAME = $(SRC_NAME:.c=.o)
OBJ = $(addprefix $(OBJ_PATH),$(OBJ_NAME)) 

all: $(NAME)

$(OBJ_PATH):
	mkdir -p $(OBJ_PATH)double
	mkdir -p $(OBJ_PATH)simple
	mkdir -p $(OBJ_PATH)cyclic

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
