.POSIX:

.SUFFIXES:
.SUFFIXES: .c .o

.all: main

main: main.o
	$(CC) $(LDFLAGS) main.o -o main

.c.o:
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	rm -f main main.o

.PHONY: all clean
