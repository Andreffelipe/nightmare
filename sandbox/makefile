# Nome do seu executável
TARGET = Sandbox

# Compilador C++
CXX = g++

# Opções de compilação
CXXFLAGS = -std=c++11 -Wall

# Diretório da biblioteca compartilhada
LIBRARY_DIR = /home/machine/Documents/nightmare/nightmare/

# Nome da biblioteca compartilhada
LIBRARY_NAME = libnightmare.so

# Diretório de inclusão onde Nightmare.h está localizado
INCLUDE_DIR = /home/machine/Documents/nightmare/nightmare/src/include

# Diretório de origem
SRC_DIR = .

# Diretório de saída
BUILD_DIR = build

# Comando para criar diretórios, se não existirem
MKDIR_P = mkdir -p

# Alvo padrão: compilação do programa
all: $(BUILD_DIR) $(TARGET)

# Compilação do programa
$(TARGET): $(SRC_DIR)/Sandbox.cpp
	$(CXX) $(CXXFLAGS) -o $@ $^ -L$(LIBRARY_DIR) -l$(LIBRARY_NAME) -I$(INCLUDE_DIR)

# Criação do diretório de construção, se não existir
$(BUILD_DIR):
	$(MKDIR_P) $(BUILD_DIR)

# Limpa os arquivos de construção e o executável
clean:
	rm -rf $(BUILD_DIR) $(TARGET)

.PHONY: all clean
