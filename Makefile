NAME		=	libasm

LIBFT_NAME	=	libft.a

LIBFT_PATH	=	./libft

LIBFT		=	$(addprefix $(LIBFT_PATH)/, $(LIBFT_NAME))

LIB_ASM_NAME	=	libasm.a

CC		=	clang

NASM		=	nasm

RM		=	rm -rf

CP		=	cp -r

SFLAGS		=	-f elf64

CFLAGS		=	-c

HEADER_NAME	=	libasm.h

HEADER_PATH	=	./include

HEADER		=	$(addprefix $(HEADER_PATH)/, $(HEADER_NAME))

SRC_ASM_NAME		+=	ft__read.s
SRC_ASM_NAME		+=	ft__strcmp.s
SRC_ASM_NAME		+=	ft__strcpy.s
SRC_ASM_NAME		+=	ft__strlen.s
SRC_ASM_NAME		+=	ft__write.s

SRC_C_NAME		+=	ft_read_test.c
SRC_C_NAME		+=	ft_strcmp_test.c
SRC_C_NAME		+=	ft_strcpy_test.c
SRC_C_NAME		+=	ft_strlen_test.c
SRC_C_NAME		+=	ft_write_test.c
SRC_C_NAME		+=	main.c

OBJ_ASM_NAME		=	$(SRC_ASM_NAME:.s=.o)

OBJ_C_NAME		=	$(SRC_C_NAME:.c=.o)

SRC_ASM_PATH		=	./srcs_asm

SRC_C_PATH		=	./srcs_c

OBJ_ASM_PATH		=	./.obj_asm

OBJ_C_PATH		=	./.obj_c

LIB_PATH		=	./.lib

SRC			=	$(addprefix $(SRC_ASM_PATH)/, $(SRC_ASM_NAME))

OBJ_ASM			=	$(addprefix $(OBJ_ASM_PATH)/, $(OBJ_ASM_NAME))

OBJ_C			=	$(addprefix $(OBJ_C_PATH)/, $(OBJ_C_NAME))

OBJ_C			=	$(addprefix $(OBJ_C_PATH)/, $(OBJ_C_NAME))

LIB_ASM			=	$(addprefix $(LIB_PATH)/, $(LIB_ASM_NAME))

all: $(NAME)

$(NAME): $(HEADER) $(LIBFT) $(LIB_ASM) $(OBJ_C_PATH) $(OBJ_C)
	@$(CC) -o $(NAME) $(OBJ_C) $(LIB_ASM) $(LIBFT)

$(LIBFT):
	@(cd $(LIBFT_PATH) && $(MAKE))

$(OBJ_C_PATH):
	@mkdir $(OBJ_C_PATH)

$(OBJ_C_PATH)/%.o: $(SRC_C_PATH)/%.c
	@$(CC) $(CFLAGS) $< -o $@

$(LIB_ASM): $(LIB_PATH) $(OBJ_ASM_PATH) $(OBJ_ASM)
	@ar rcs $(LIB_ASM_NAME) $(OBJ_ASM)
	@mv $(LIB_ASM_NAME) $(LIB_PATH)/

$(OBJ_ASM_PATH):
	@mkdir $(OBJ_ASM_PATH)

$(OBJ_ASM_PATH)/%.o: $(SRC_ASM_PATH)/%.s
	@$(NASM) $(SFLAGS) $< -o $@

$(LIB_PATH):
	@mkdir $(LIB_PATH)

clean:
	@$(RM) $(OBJ_ASM_PATH)
	@$(RM) $(OBJ_C_PATH)
	@(cd $(LIBFT_PATH) && $(MAKE) clean)

fclean: clean
	@$(RM) $(LIB_PATH)
	@$(RM) $(NAME)
	@(cd $(LIBFT_PATH) && $(MAKE) fclean)

re: fclean all
