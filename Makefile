
CC = g++ -std=c++14

CFLAGS = -g -I/Users/tt/vcpkg/installed/arm64-osx/include
LDFLAGS = 	-L/Users/tt/vcpkg/installed/arm64-osx/lib -ljsoncpp

#-I/Users/tt/vcpkg/installed/arm64-osx/include -L/Users/tt/vcpkg/installed/arm64-osx/lib -ljsoncpp

all:	run

tet.o:	tet.cpp tet.h
	$(CC) -c $(CFLAGS) tet.cpp
	
main.o: main.cpp tet.h
	$(CC) -c $(CFLAGS) main.cpp
	
run:	tet.o main.o
	g++ -std=c++14 tet.o main.o -o run $(LDFLAGS)
clean:
	rm -rf tet.o main.o run

