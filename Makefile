NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror -fsanitize=address
RM = rm -f

LIBFT_PATH = ./libft
LIBFT = $(LIBFT_PATH)/libft.a
INC = -I ./include -I $(LIBFT_PATH)

SRC_PATH = ./src
SRC = push_swap.c push.c quick_sort.c rotate.c \
		sort.c swap.c utils.c

OBJ_PATH = ./obj
OBJ = $(addprefix $(OBJ_PATH)/, $(SRC: .c=.o))

all: $(NAME)

debug:
		@echo "Current directory:"
		@pwd
		@echo "\nSRC path content:"
		@ls -l $(SRC_PATH)
		@echo "\nChecking full paths:"
		@for file in $(SRC); do \
				echo "Looking for: $(SRC_PATH)/$$file"; \
				ls $(SRC_PATH)/$$file || echo "$$file not found"; \
		done

$(NAME): $(LIBFT) $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) $(LIBFT) -o $(NAME)

$(LIBFT):
	@make -C $(LIBFT_PATH)

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.c
	@mkdir -p $(OBJ_PATH)
	$(CC) $(CFLAGS) $(INC) -c $< -o $@

clean:
	$(RM) -r $(OBJ_PATH)
	@make clean -C $(LIBFT_PATH)

fclean: clean
	$(RM) $(NAME) 
	@make fclean -C $(LIBFT_PATH)

re: fclean all

.PHONY: all clean fclean re