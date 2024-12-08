# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tales <tales@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/08 10:58:05 by tales             #+#    #+#              #
#    Updated: 2024/12/08 18:31:30 by tales            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Nome do executavel
NAME = Elevador
#compilador
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

# Arquivos
SRCS =	main.cpp\
		Elevador.cpp\
		
OBJS = $(SRCS:.cpp=.o)

# Regras
all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

# Phony para evitar conflito com arquivos de mesmo nome
.PHONY: all clean fclean re