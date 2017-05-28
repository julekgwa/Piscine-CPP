# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: julekgwa <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/05/23 17:45:44 by julekgwa          #+#    #+#              #
#    Updated: 2017/05/23 17:45:46 by julekgwa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = replace
FLAG = -Wall -Wextra -Werror -o
SRC = losers.cpp Sed4Losers.cpp

all:
	@clang++ $(FLAG) $(NAME) $(SRC)
	@echo "\033[32mBuilt $(NAME).\033[0m"
clean:
	@/bin/rm -f $(NAME)
	@echo "\033[32mCleaned up compiled files.\033[0m"
