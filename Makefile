all: Lab07

Lab07: main.o Cylinder.o
	g++ main.o Cylinder.o -o Lab07

main.o: main.cpp inc/Cylinder.h
	g++ -Iinc -c main.cpp

Cylinder.o: src/Cylinder.cpp inc/Cylinder.h
	g++ -Iinc -c src/Cylinder.cpp

clean:
	rm -rf *.o Lab07