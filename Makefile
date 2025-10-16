# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkiram <mkiram@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/14 10:06:55 by mkiram            #+#    #+#              #
#    Updated: 2025/10/15 12:11:49 by mkiram           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS = ft_atoi.c ft_isprint.c ft_memmove.c ft_strchr.c ft_strmapi.c ft_toupper.c \
ft_bzero.c ft_itoa.c ft_memset.c ft_strdup.c ft_strncmp.c \
ft_calloc.c ft_putchar_fd.c ft_striteri.c ft_strnstr.c \
ft_isalnum.c ft_putendl_fd.c ft_strjoin.c ft_strrchr.c \
ft_isalpha.c ft_memchr.c ft_putnbr_fd.c ft_strlcat.c ft_strtrim.c \
ft_isascii.c ft_memcmp.c ft_putstr_fd.c ft_strlcpy.c ft_substr.c \
ft_isdigit.c ft_memcpy.c ft_split.c ft_strlen.c ft_tolower.c

OBJS = $(SRCS:.c=.o)

BOUNS = ft_lstmap_bouns.c ft_lstiter_bouns.c ft_lstclear_bouns.c \
ft_lstdelone_bouns.c ft_lstadd_back_bouns.c \
ft_lstlast_bouns.c ft_lstsize_bouns.c ft_lstadd_front_bouns.c ft_lstnew_bouns.c

OBJSB = $(OBJS) $(BOUNS:.c=.o)

CC = cc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

NAME = libft.a

all : $(NAME) 

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS) $(OBJSB)

bouns: $(OBJS) $(OBJSB)
	ar rcs $(NAME) $(OBJS) $(OBJSB)

%.o: %.c
	$(CC) $(CFLAGS) -o $< 

fclean: clean
	$(RM) $(NAME)

re: fclean all
	
.PHONY: clean
