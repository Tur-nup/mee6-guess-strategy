all: code

code:
	g++ -c src/agentHandler.cpp src/guessingGame.cpp
	g++ -o guess src/main.cpp

clean:
	rm -f *.o guess