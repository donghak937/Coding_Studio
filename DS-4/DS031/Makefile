CC = g++
SRC = DS031.cpp StackInt.cpp
OBJ = $(SRC:.cpp=.o)
EXEC = mains

$(EXEC): $(OBJ)
	$(CC) -o $@ $^

%.o: %.cpp %.h
	$(CC) -c $<

clean:
	rm -f $(OBJ) $(EXEC)