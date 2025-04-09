all: code

code:
	g++ -o guess src/main.cpp

clean:
	rm -f *.o guess