objects = main.o graphics.o 
cligame: $(objects)
	g++ -o cligame $(objects)

debug: $(objects)
	g++ -Ddeug -o cligame main.cpp $(objects) -g

main.o: graphics.o
graphics.o: 

test: cligame
	./cligame

.PHONY: clean
clean:
	rm ./cligame *.o
