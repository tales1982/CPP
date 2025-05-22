# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tales <tales@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/14 12:00:00 by tlima-de          #+#    #+#              #
#    Updated: 2025/05/22 22:04:25 by tales            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler and flags
CXX     := c++
CXXFLAGS:= -Wall -Wextra -Werror -std=c++98

# Executable name
NAME    := swap

SRCS    := main.cpp

# Object files
OBJS    := $(SRCS:.cpp=.o)

# Default rule
all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
