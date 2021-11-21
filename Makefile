objects = main.o graphics.o input.o
cflags = -lncurses
cligame: $(objects)
	g++ -o cligame $(objects) $(cflags)

debug: $(objects)
	g++ -Ddeug -o cligame main.cpp $(objects) $(cflags) -g

main.o: defs.h graphics.o input.o
graphics.o: defs.h
input.o: defs.h

test: cligame
	./cligame

.PHONY: clean
.PHONY: defs.h
clean:
	-rm cligame *.o
