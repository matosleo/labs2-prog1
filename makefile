# Comandos do sistema operacional
# Linux: rm -rf 
# Windows: cmd //C del 
RM = rm -rf 

# Compilador
CC = g++

# Variaveis para os subdiretorios
SRC = ./src
INC = ./include
BIN = ./bin
OBJ = ./build
DOC = ./doc

# Define o nome do binario/executavel final
PROG = $(BIN)/geometria

# Garante que os alvos desta lista nao sejam confundidos com arquivos de mesmo nome
.PHONY: all clean debug doxy doc direc

# Opcoes de compilacao
CPPFLAGS = -Wall -pedantic -std=c++11 -I$(INC)

# Lista dos arquivos objeto (.o) que formam o binario/executavel final
OBJS = $(OBJ)/retangulo.o $(OBJ)/triangulo.o $(OBJ)/circulo.o $(OBJ)/piramide.o $(OBJ)/cubo.o $(OBJ)/paralelepipedo.o $(OBJ)/esfera.o $(OBJ)/main.o

all : $(OBJS)
	$(CC) $(LDFLAGS) -o $(PROG) $(OBJS)

# Alvo para a compilação com informações de debug
# Altera a flag CFLAGS, incluindo as opções -g -O0 e recompila todo o projeto
debug: CFLAGS += -g -O0 
debug: all

# Alvo para a construcao do objeto build/main.o
# Define os arquivos objeto dos quais main.o depende.
$(OBJ)/main.o : $(OBJ)/retangulo.o $(OBJ)/triangulo.o $(OBJ)/circulo.o
	$(CC) $(CPPFLAGS) -c $(SRC)/main.cpp -o $@

$(OBJ)/retangulo.o : $(INC)/retangulo.h
	$(CC) $(CPPFLAGS) -c $(SRC)/retangulo.cpp -o $@

$(OBJ)/triangulo.o : $(INC)/triangulo.h
	$(CC) $(CPPFLAGS) -c $(SRC)/triangulo.cpp -o $@

$(OBJ)/circulo.o : $(INC)/circulo.h
	$(CC) $(CPPFLAGS) -c $(SRC)/circulo.cpp -o $@

$(OBJ)/piramide.o : $(INC)/piramide.h
	$(CC) $(CPPFLAGS) -c $(SRC)/piramide.cpp -o $@

$(OBJ)/cubo.o : $(INC)/cubo.h
	$(CC) $(CPPFLAGS) -c $(SRC)/cubo.cpp -o $@

$(OBJ)/paralelepipedo.o : $(INC)/paralelepipedo.h
	$(CC) $(CPPFLAGS) -c $(SRC)/paralelepipedo.cpp -o $@

$(OBJ)/esfera.o : $(INC)/esfera.h
	$(CC) $(CPPFLAGS) -c $(SRC)/esfera.cpp -o $@


# Alvo para a criação dos diretórios padrão de projetos.
direc:
	mkdir bin build doc include lib src test

# Alvo para a criação do arquivo Doxyfile.
doxy:
	doxygen -g

# Alvo (target) para a geração automatica de documentacao usando o Doxygen.
# Sempre remove a documentacao anterior (caso exista) e gera uma nova.
doc:
	$(RM) $(DOC)/*
	doxygen ./Doxyfile

# Alvo (target) usado para limpar os arquivos temporarios (objeto)
# gerados durante a compilacao, assim como os arquivos binarios/executaveis.
clean:
	$(RM) $(PROG) $(OBJS)