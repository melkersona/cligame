cligame: main.cpp
	g++ -o cligame main.cpp
test: cligame
	./cligame
clean:
	rm ./cligame
