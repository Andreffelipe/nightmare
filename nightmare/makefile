# Nome da sua biblioteca compartilhada (.so)
SO_NAME = libnightmare.so

# Compilador C++
CXX = g++

# Opções de compilação para criar uma biblioteca compartilhada no Linux
CXXFLAGS = -std=c++11 -Wall -shared -fPIC

# Diretórios de origem e destino
SRC_DIR = src
BUILD_DIR = build

# Lista de arquivos fonte
SRCS = $(wildcard $(SRC_DIR)/Nightmare/*.cpp) \
       $(wildcard $(SRC_DIR)/*.cpp)

# Gere nomes de objetos com base em nomes de fonte
OBJS = $(patsubst $(SRC_DIR)/%.cpp,$(BUILD_DIR)/%.o,$(SRCS))

# Comando para criar diretórios, se não existirem
MKDIR_P = mkdir -p

# Alvo padrão: compilação da biblioteca compartilhada (.so)
all: $(BUILD_DIR) $(SO_NAME)

# Compilação da biblioteca compartilhada (.so)
$(SO_NAME): $(OBJS)
	$(CXX) $^ -o $@ $(CXXFLAGS)

# Compilação dos arquivos fonte em objetos
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(MKDIR_P) $(dir $@) # Crie diretório se não existir
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Criação do diretório de construção, se não existir
$(BUILD_DIR):
	$(MKDIR_P) $(BUILD_DIR)

# Limpa os arquivos de construção e a biblioteca compartilhada (.so)
clean:
	rm -rf $(BUILD_DIR) $(SO_NAME)

.PHONY: all clean
