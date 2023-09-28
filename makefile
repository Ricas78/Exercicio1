ALL = main

all: $(ALL)

main: fc1.o fc2.o fc3.o parte_1.o
		gcc -o $@ $^ -lm

%.o: %.c
		gcc -c $<

clean:
		rm -f *.s *.o output erro

distclean: clean
		rm -f $(ALL)

