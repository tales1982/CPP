# --- config ---
NAME     := sobrecarga
CXX      := g++
CXXFLAGS := -Wall -Wextra -Werror -std=c++98

# fontes e objetos
SRCS := main.cpp Sobrecarga.cpp
OBJS := $(SRCS:.cpp=.o)

# --- regras principais ---
all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

%.o: %.cpp Sobrecarga.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# --- utilitários ---
clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

# opcional: rodar o binário
run: $(NAME)
	./$(NAME)

.PHONY: all clean fclean re run
