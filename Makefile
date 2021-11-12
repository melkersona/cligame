objects = main.o graphics.o input.o
cflags = -lncurses
cligame: $(objects)
	g++ -o cligame $(objects) $(cflags)

debug: $(objects)
	g++ -Ddeug -o cligame main.cpp $(objects) $(cflags) -g

main.o: graphics.o input.o
graphics.o: 
input.o:

test: cligame
	./cligame

.PHONY: clean
clean:
	rm ./cligame *.o
