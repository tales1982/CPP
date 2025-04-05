# Nome do executável final
NAME = out

# Compilador
CXX = g++

# Flags de compilação (opcional: -Wall -Wextra -Werror)
CXXFLAGS = -Wall -Wextra -std=c++98

# Arquivos fonte
SRCS = main.cpp Agenda.cpp utils.cpp

# Arquivos objeto (gerados a partir dos fontes)
OBJS = $(SRCS:.cpp=.o)

# Regra padrão
all: $(NAME)

# Como gerar o executável
$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

# Regra para limpar arquivos .o
clean:
	rm -f $(OBJS)

# Regra para limpar tudo, inclusive o executável
fclean: clean
	rm -f $(NAME)

# Regra para recompilar do zero
re: fclean all

# Evita que 'make clean' tente rodar um arquivo chamado 'clean'
.PHONY: all clean fclean re
