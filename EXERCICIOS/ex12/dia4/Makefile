# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tales <tales@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/14 11:44:47 by tales             #+#    #+#              #
#    Updated: 2025/06/17 09:09:16 by tales            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Variáveis
NAME    = day4
CXX     = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC     = main.cpp Student.cpp
OBJ     = $(SRC:.cpp=.o)

# Regra principal
all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

# Limpa os arquivos objeto
clean:
	rm -f $(OBJ)

# Limpa os objetos e o executável
fclean: clean
	rm -f $(NAME)

# Recompila tudo
re: fclean all

.PHONY: all clean fclean re
