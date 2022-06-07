CC=g++
CFLAGS=-Wall -std=c++17 -c
OPTMIZE=-O0
OPENGLDEPS=-lglfw -lGLEW -lGL

all: main

main: main.o shaders.o
	$(CC) -D GLEW_STATIC -o main main.o shaders.o $(OPENGLDEPS)
	@echo Linking done

main.o: main.cxx main.h
	$(CC) $(CFLAGS) -o main.o main.cxx
	@echo Compiling main.cxx done

shaders.o: shaders.cxx shaders.h
	$(CC) $(CFLAGS) -o shaders.o shaders.cxx
	@echo Compiling shaders.cxx done

.PHONY:
	clean

clean:
	rm *.o
	@echo Cleanup done
