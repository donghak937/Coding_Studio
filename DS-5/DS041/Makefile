CC = g++
SRC = DS041.cpp StackIntList.cpp
OBJ = $(SRC:.cpp=.o)
EXEC = main

$(EXEC): $(OBJ)
	$(CC) -o $@ $^

%.o: %.cpp %.h
	$(CC) -c $<

clean:
	rm -f $(OBJ) $(EXEC)