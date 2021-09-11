all: add-nbo

add-nbo: main.o add.o readInt.o
	g++ -o add-nbo main.o add.o readInt.o

main.o: add.h  readInt.h main.cpp

add.o: add.h add.cpp

readInt.o: readInt.h readInt.cpp

clean:
	rm -f add-nbo
	rm -f *.o