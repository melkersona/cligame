objects = main.o graphics.o input.o script.o
headers = defs.h state.h
cflags = -lncurses
OBJ = ./obj
BIN = ./bin
EXE = cligame

cligame: $(objects) $(headers)
	g++ -o $(EXE) $(objects) $(cflags)

debug: $(objects)
	g++ -Ddebug -o cligame main.cpp $(objects) $(cflags) -g

$(objects): $(headers)

test: cligame
	./$(EXE)

.PHONY: clean tags
clean:
	-rm $(objects) $(EXE)

tags:
	ctags -R --exclude=.git
