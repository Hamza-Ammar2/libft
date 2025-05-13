CC = cc
CFLAGS = -Wall -Wextra -Werror
OBJDIR = objs
SRC = ft_atoi.c     ft_isdigit.c       ft_lstdelone.c  ft_memchr.c      ft_putendl_fd.c  ft_striteri.c  ft_strncmp.c  ft_toupper.c
ft_bzero.c    ft_isprint.c       ft_lstiter.c    ft_memcmp.c      ft_putnbr_fd.c   ft_strjoin.c   ft_strnstr.c
ft_calloc.c   ft_itoa.c          ft_lstlast.c    ft_memcpy.c      ft_putstr_fd.c   ft_strlcat.c   ft_strrchr.c
ft_isalnum.c  ft_lstadd_back.c   ft_lstmap.c     ft_memmove.c     ft_split.c       ft_strlcpy.c   ft_strtrim.c
ft_isalpha.c  ft_lstadd_front.c  ft_lstnew.c     ft_memset.c      ft_strchr.c      ft_strlen.c    ft_substr.c
ft_isascii.c  ft_lstclear.c      ft_lstsize.c    ft_putchar_fd.c  ft_strdup.c      ft_strmapi.c   ft_tolower.c
OBJS = $(addprefix $(OBJDIR)/, $(patsubst %.c, %.o, $(SRC))

NAME = libft.a

all: $(NAME)

$(OBJS): | $(OBJDIR)

$(OBJDIR):
	mkdir $(OBJDIR)

$(OBJDIR)/%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)


.PHONY : clean all fclean re
clean:
	rm -rf $(OBJDIR)
fclean: clean
	rm -f $(NAME)
re: fclean all
