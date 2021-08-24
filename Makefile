INC_DIR   := include
SRC_DIR   := src
OBJ_DIR   := obj

_dummy := $(shell mkdir -p obj)

CXX := g++
CXXFLAGS := -std=c++17 -pedantic-errors -Wall -Wextra\
	    -Werror -MMD -MP -I$(INC_DIR) -ggdb

SOURCES := $(wildcard $(SRC_DIR)/*.cpp)
OBJECTS := $(SOURCES:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)
DEPS    := $(wildcard $(OBJ_DIR)/*.d)

.PHONY: clean run doc

Main: $(OBJECTS)
	$(CXX) $(LDFLAGS) $^ -o $@

$(OBJECTS): $(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) -c $(OUTPUT_OPTION) $<

clean:
	rm -rfv $(OBJ_DIR) Main doc

run:
	./Main

doc:
	@doxygen ./Doxyfile
	@xdg-open ./doc/html/index.html&

-include $(DEPS)

$(MAKEFILE_LIST): ;
%.h: ;
%:: %,v
%:: RCS/%,v
%:: RCS/%
%:: s.%
%:: SCCS/s.%
