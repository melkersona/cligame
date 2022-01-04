sources = $(wildcard *.cpp)
headers = $(wildcard *.h)
objects = $(addprefix $(OBJ), $(sources:.cpp=.o))
CXXFLAGS = -lncurses
CXX = g++
OBJ = obj/
BIN = bin/
EXE = cligame
out = -o $(EXE) $(objects) $(CXXFLAGS)

cligame: $(objects) $(headers)
	$(CXX) $(out)

debug: $(objects)
	$(CXX) -Ddebug $(out) -g

$(objects): $(headers) $(OBJ)
	$(CXX) -c -o $@ $(@F:.o=.cpp)

$(OBJ):
	mkdir $(OBJ)

test: cligame
	./$(EXE)

.PHONY: clean tags
clean:
	-rm $(objects) $(EXE)

tags:
	ctags -R --exclude=.git
