# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tales <tales@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/17 13:44:55 by tales             #+#    #+#              #
#    Updated: 2024/11/17 13:47:56 by tales            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


#nome do executável
TARGET = search

#Diretorios
SRC_DIR = Sources
HEADER_DIR = Headers

#Arquivos fonte
SRCS = $(SRC_DIR)/main.cpp $(SRC_DIR)/search.cpp

#Compilador
CXX = c++

#Flags de compilação
CXXFLAGS = -std=c++98 -Wall -I$(HEADER_DIR)

#Regras de compilação
all: $(TARGET)

$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRCS)

#Limpeza dos arquivos compilados
clean:
	rm -f $(TARGET)	
#Explicação:
#TARGET: Define o nome do executável como bank.
#SRC_DIR e HEADER_DIR: Especificam os diretórios onde estão os arquivos .cpp e os cabeçalhos .hpp, respectivamente.
#SRCS: Lista os arquivos-fonte.
#CXXFLAGS: Inclui flags de compilação. A flag -I$(HEADER_DIR) adiciona o diretório de cabeçalhos ao caminho de inclusão.
#all: Alvo principal que compila o programa.
#clean: Alvo para limpar o executável gerado.