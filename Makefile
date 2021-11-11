cligame: main.cpp
	g++ -o cligame main.cpp

debug: main.cpp
	g++ -Ddeug -o cligame main.cpp -g

test: cligame
	./cligame

.PHONY: clean
clean:
	rm ./cligame
