# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tales <tales@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/06 20:58:54 by tales             #+#    #+#              #
#    Updated: 2024/12/06 21:10:42 by tales            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Nome do executavel
NAME = RobotFighter

#compilador
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

# Arquivos
SRCS =	main.cpp\
		RobotFighter.cpp\
		
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