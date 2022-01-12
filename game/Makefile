CFLAGS = -Wall

all: play

play:	main.o game.o
		cc main.o game.o -lncursesw -o play

game.o: game.c game.h

main.o: main.c game.h

.c .o:
		cc -c $< $(CFLAGS)

.SUFFIXES: .c .o
