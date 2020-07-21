.PHONY: all

CC=gcc
SRC=./
OBJS=./objs
BIN=./bin

all: file1.o file2.o
	$(CC) -o $(BIN)binary.out $(OBJS)file1.o $(OBJS)file2.o

setup: 
	mkdir $(OBJS)
	mkdir $(BIN)

file1.o:
	$(CC) -c $(SRC)file1.cpp
	mv file1.o $(OBJS)

file2.o:
	$(CC) -c $(SRC)file2.cpp
	mv file2.o $(OBJS)
