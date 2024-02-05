NAME = libft.a
LIB = ar rcs
RM = rm -f

CC = cc
CFLAGS = -Wall -Wextra -Werror


SRCS = ./ft_atoi.c ./ft_bzero.c ./ft_calloc.c ./ft_isalnum.c ./ft_isalpha.c \
./ft_isascii.c ./ft_isdigit.c ./ft_tolower.c ./ft_isprint.c ./ft_toupper.c \
./ft_memchr.c ./ft_memcmp.c ./ft_memcpy.c ./ft_memmove.c ./ft_memset.c ./ft_strchr.c \
./ft_strdup.c ./ft_strlcat.c ./ft_strlcpy.c ./ft_strlen.c ./ft_strncmp.c ./ft_strnstr.c ./ft_strrchr.c \
./ft_tolower.c ./ft_toupper.c ./ft_substr.c ./ft_strjoin.c ./ft_strtrim.c ./ft_split.c ./ft_itoa.c \
./ft_strmapi.c ./ft_striteri.c ./ft_putchar_fd.c ./ft_putstr_fd.c ./ft_putendl_fd.c ./ft_putnbr_fd.c
OFILES = $(SRCS:.c=.o)
INCLUDE = libft.h

BONUSSRC = ./ft_lstnew.c ./ft_lstadd_front.c ./ft_lstsize.c ./ft_lstlast.c ./ft_lstadd_back.c \
./ft_lstdelone.c ./ft_lstclear.c ./ft_lstiter.c ./ft_lstmap.c


BONUSOBJ = $(BONUSSRC:.c=.o)

all: $(NAME)

$(NAME):$(OFILES) $(BONUSOBJ) $(INCLUDE)
	$(LIB) $(NAME) $(OFILES) 

bonus: $(OFILES) $(BONUSOBJ) $(INCLUDE)
	$(LIB) $(NAME) $(BONUSOBJ) $(OFILES)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OFILES) $(BONUSOBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

rebonus: fclean bonus