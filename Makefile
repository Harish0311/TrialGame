CXX = g++

UNAME := $(shell uname)
ifeq ($(UNAME),Linux)
    CXXFLAGS = -I./include/linux -I./include/shared -DSFML_STATIC
    LDFLAGS = -L./lib/linux
    LIBS = -lsfml-graphics -lsfml-window -lsfml-system -lfreetype
else
    CXXFLAGS = -I./include/windows -I./include/shared -DSFML_STATIC
    LDFLAGS = -L./lib/windows
    LIBS = -lsfml-graphics-s -lsfml-window-s -lsfml-system-s -lopengl32 -lfreetype -lwinmm -lgdi32
endif

SRC_DIR = ./src
OBJ_DIR = ./out
SOURCES = $(wildcard $(SRC_DIR)/*.cpp)
OBJECTS = $(patsubst $(SRC_DIR)/%.cpp,$(OBJ_DIR)/%.o,$(SOURCES))

all: compile link run

compile: $(OBJECTS)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CXX) -c $< $(CXXFLAGS) -o $@

link: $(OBJECTS)
	$(CXX) $^ -o $(OBJ_DIR)/main $(LDFLAGS) $(LIBS)

run:
	./$(OBJ_DIR)/main

clean:
	rm -f $(OBJ_DIR)/main $(OBJ_DIR)/*.o