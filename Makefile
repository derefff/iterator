OBJS=*.cpp
CC=g++

compile: $(OBJS)
	$(CC) $(OBJS) -o main

run:
	./main

clean:
	rm main

compile-run: $(OBJS) 
	$(CC) $(OBJS) -o main && ./main
