# Nome do executável final
NAME = minhaClasseExec

# Compilador e flags
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

# Fontes
SRCS = main.cpp MinhaClasse.cpp
OBJS = $(SRCS:.cpp=.o)

# Regra padrão
all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

# Limpar arquivos .o
clean:
	rm -f $(OBJS)

# Limpar tudo (executável + .o)
fclean: clean
	rm -f $(NAME)

# Recompilar tudo do zero
re: fclean all

.PHONY: all clean fclean re
