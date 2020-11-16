LIB_ASM_NAME	=	libasm.a

CC		=	clang

NASM		=	nasm

RM		=	rm -rf

CP		=	cp -r

SFLAGS		=	-f elf64

SRC_NAME		+=	hello.s

OBJ_NAME		=	$(SRC_NAME:.s=.o)

SRC_PATH		=	./srcs

OBJ_PATH		=	./.obj

LIB_PATH		=	./.lib

SRC			=	$(addprefix $(SRC_PATH)/, $(SRC_NAME))

OBJ			=	$(addprefix $(OBJ_PATH)/, $(OBJ_NAME))

LIB_ASM			=	$(addprefix $(LIB_PATH)/, $(LIB_ASM_NAME))

all: $(LIB_ASM)

$(LIB_ASM): $(LIB_PATH) $(OBJ_PATH) $(OBJ)
	@ar rcs $(LIB_ASM_NAME) $(OBJ)
	@mv libasm.a $(LIB_PATH)/

$(OBJ_PATH):
	@mkdir $(OBJ_PATH)

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.s
	@$(NASM) $(SFLAGS) $< -o $@

$(LIB_PATH):
	@mkdir $(LIB_PATH)

clean:
	@$(RM) $(OBJ_PATH)

fclean: clean
	@$(RM) $(LIB_PATH)

re: fclean all
