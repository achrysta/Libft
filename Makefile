# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: achrysta <achrysta@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/23 12:27:35 by achrysta          #+#    #+#              #
#    Updated: 2021/10/25 17:41:57 by achrysta         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			=	ft_isalnum.c ft_isprint.c \
					ft_memcmp.c  ft_putchar_fd.c \
					ft_split.c ft_strlcat.c \
					ft_strncmp.c ft_substr.c \
					ft_atoi.c ft_isalpha.c \
					ft_itoa.c ft_memcpy.c \
					ft_putendl_fd.c ft_strchr.c \
					ft_strlcpy.c ft_strnstr.c \
					ft_tolower.c ft_bzero.c \
					ft_isascii.c ft_strtrim.c \
					ft_memmove.c ft_putnbr_fd.c \
					ft_strdup.c  ft_strlen.c \
					ft_strrchr.c ft_toupper.c \
					ft_calloc.c  ft_isdigit.c \
					ft_memchr.c  ft_memset.c \
					ft_putstr_fd.c  ft_strjoin.c \
					ft_strmapi.c  ft_striteri.c \

OBJS			= $(SRCS:.c=.o)

BONUS			=	ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c \
					ft_lstdelone.c ft_lstiter.c ft_lstlast.c \
					ft_lstmap.c ft_lstnew.c ft_lstsize.c \

BONUS_OBJS		= $(BONUS:.c=.o)

SRC_D			= $(SRCS:.c=.d) $(BONUS:.c=.d)

CC				= gcc

RM				= rm -f

CFLAGS			= -Wall -Wextra -Werror -I$(HEADER)

HEADER			= libft.h

NAME			= libft.a

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

%.o:			%.c $(HEADER)
				$(CC) $(CFLAGS) -c $< -o $@ -MD
clean:
				$(RM) $(OBJS) $(BONUS_OBJS)
				$(RM) $(SRC_D)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

bonus:			
				@make OBJS="$(BONUS_OBJS)" all

.PHONY:			all clean fclean re bonus
	
-include $(SRC_D)