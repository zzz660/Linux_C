main: main.o ret_ptr.o
	gcc main.o ret_ptr.o -o main

main.o: main.c ret_ptr.c ret_ptr.h
	gcc -c main.c -o main.o

ret_ptr.o: ret_ptr.c ret_ptr.h
	gcc -c ret_ptr.c -o ret_ptr.o

clean:
	-rm main *.o
.PHONY: clean