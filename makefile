CXX = g++
TARGET = main
TEST = main_test
FLAGS = -g -Werror -Wall -std=c++11 -Iinclude

# _DIRECTORIES 
SRC_DIR=src
TEST_DIR=test
OBJ_DIR=obj
TEST_OBJ_DIR= $(OBJ_DIR)/test

# FILES 
SRC=$(wildcard $(SRC_DIR)/*.cpp) 
TEST_SRC=$(wildcard $(TEST_DIR)/*.cpp)

OBJ=$(patsubst $(SRC_DIR)/%.cpp, $(OBJ_DIR)/%.o, $(SRC))
SUB_OBJ=$(filter-out $(OBJ_DIR)/main.o, $(OBJ))
TEST_OBJ=$(patsubst $(TEST_DIR)/%.cpp, $(TEST_OBJ_DIR)/%.o, $(TEST_SRC))


all : $(TARGET) $(TEST)

# compile files to objects 
$(OBJ_DIR)/%.o :  $(SRC_DIR)/%.cpp 
	@mkdir -p $(dir $@)
	$(CXX) $(FLAGS) -c $< -o $@


# compile the test files into object files
$(TEST_OBJ_DIR)/%.o : $(TEST_DIR)/%.cpp
	@mkdir -p $(dir $@)
	$(CXX) $(FLAGS) -c $< -o $@ 


# compile the target 
$(TARGET) : $(OBJ)
	$(CXX) $(FLAGS) $(OBJ) -o $(TARGET)

$(TEST) : $(SUB_OBJ) $(TEST_OBJ)
	$(CXX) $(FLAGS) $(SUB_OBJ) $(TEST_OBJ) -o $(TEST)

test : $(TEST)
	./$(TEST)

run : $(TARGET)
	./$(TARGET)

clean: 
	rm -rf $(TEST) $(TARGET) $(OBJ_DIR) 