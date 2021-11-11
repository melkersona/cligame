cligame: main.cpp
	g++ -o cligame main.cpp

debug: main.cpp
	g++ -Ddeug -o cligameDEBUG main.cpp -g

test: cligame
	./cligame

.PHONY: clean
clean:
	rm ./cligame
	rm ./cligameDEBUG
