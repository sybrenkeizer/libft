CC = cc
CFLAGS = -Werror -Wextra -Wall
TFLAGS = -Werror -Wextra -Wall -Wconversion -Wsign-conversion
NAME = libft.a
TEST = run_test
FSAN = -fsanitize=address,undefined -fno-omit-frame-pointer
VALGRIND = valgrind --leak-check=yes --show-leak-kinds=all \
		   --track-origins=yes --error-exitcode=1

CHAR_SRCS =	ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c

CONV_SRCS =	ft_tolower.c \
	 		ft_toupper.c \
			ft_atoi.c \
			ft_itoa.c

STR_SRCS =	ft_strlen.c \
			ft_strncmp.c \
			ft_strchr.c \
			ft_strrchr.c \
			ft_strnstr.c \
			ft_strlcpy.c \
			ft_strlcat.c \
			ft_substr.c \
			ft_strjoin.c \
			ft_strtrim.c \
			ft_strmapi.c \
			ft_striteri.c \
			ft_split.c \
			ft_strdup.c

MEM_SRCS =	ft_bzero.c \
			ft_memset.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_calloc.c

FD_SRCS =	ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c

LST_SRCS =	ft_lstnew.c \
			ft_lstadd_front.c \
			ft_lstsize.c \
			ft_lstlast.c \
			ft_lstadd_back.c \
			ft_lstdelone.c \
			ft_lstclear.c \
			ft_lstiter.c \
			ft_lstmap.c

SRCS = $(CHAR_SRCS) $(CONV_SRCS) $(STR_SRCS) $(MEM_SRCS) $(FD_SRCS) $(LST_SRCS)
OBJS = $(SRCS:.c=.o)

.PHONY: all clean fclean re test fsan valgrind

all: $(NAME);

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME) $(TEST)

re: fclean all

bonus: all

test: re
	$(CC) $(TFLAGS) tests/*.c $(NAME) -I. -Itests -o $(TEST) -lbsd
	./run_test

fsan: re
	$(CC) $(TFLAGS) tests/*.c $(NAME) -I. -Itests -o $(TEST) -lbsd $(FSAN)
	./run_test

valgrind: re
	$(CC) $(TFLAGS) tests/*.c $(NAME) -I. -Itests -o $(TEST) -lbsd
	$(VALGRIND) ./run_test
