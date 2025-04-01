CC = g++
SRC = DS031.cpp StackInt.cpp
OBJ = $(SRC:.c=.o)
EXEC = main

$(EXEC): $(OBJ)
	$(CC) -o $@ $^

%.o: %.c %.h
	$(CC) -c $<

clean:
	rm -f $(OBJ) $(EXEC)