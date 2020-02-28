# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: luimarti <luimarti@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/21 14:49:54 by luimarti          #+#    #+#              #
#    Updated: 2020/02/24 15:42:48 by luimarti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a

CFLAGS = -Wall -Wextra -Werror
SOURCES= $(wildcard *.c)
OBJECTS= $(SOURCES:.c=.o)

all: $(NAME)

$(NAME): $(SOURCES) libft.h
	@gcc $(CFLAGS) -I./ -c $(SOURCES)
	@ar rc $(NAME) $(OBJECTS)
	@ranlib $(NAME)

clean:
	@rm -f $(OBJECTS)

fclean: clean
	@rm -f $(NAME)

re: fclean all
