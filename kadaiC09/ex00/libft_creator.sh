# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kaoki <kaoki@student.42tokyo.jp>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/04 02:55:16 by kaoki             #+#    #+#              #
#    Updated: 2025/04/04 03:48:07 by kaoki            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash

CC="gcc"
CFLAGS="-Wall -Wextra -Werror -c"

SRC="ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c"

$CC $CFLAGS $SRC

ar rcs libft.a *.o

rm -f *.o
