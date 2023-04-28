CXX := g++
CXXFLAGS := -Wall -Wextra -Werror -std=c++98
INC			:= -I inc/

TARGET := zombie 

SRC_DIR := src/
OBJ_DIR := obj/

SRC := $(wildcard $(SRC_DIR)*.cpp)
OBJ := $(patsubst $(SRC_DIR)%.cpp,$(OBJ_DIR)%.o,$(SRC))

GREEN = \033[0;32m
RED = \033[0;31m
RESET = \033[0m

OBJF      = test

.PHONY: all clean fclean re

all: $(TARGET)

$(TARGET): $(OBJ) 
	@$(CXX) $(CXXFLAGS)  $^ -o $@
	@echo "$(GREEN)Zombie Compiled.$(RESET)"

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp | $(OBJF)
	@$(CXX) $(CXXFLAGS) $(INC) -c $< -o $@

$(OBJF):
	@mkdir -p $(OBJ_DIR)

clean:
	@rm -f $(OBJ_DIR)*.o
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -f $(TARGET)
	@echo "$(RED)Cleaning ...$(RESET)"

re: fclean all
