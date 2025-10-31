all: main

main: main.o ret_allocator.o
	gcc $^ -o $@

clean:
	-rm main *.o

.PHONY: clean

sources = main.c ret_allocator.c

include $(sources:.c=.d)

%.d: %.c
	set -e; rm -f $@; \
	$(CC) -MM $(CPPFLAGS) $< > $@.$$$$; \
	sed 's,\($*\)\.o[ :]*,\1.o $@ : ,g' < $@.$$$$ > $@; \
	rm -f $@.$$$$