CC = g++
SRC = DS032.cpp StudentPlusStack.cpp
OBJ = $(SRC:.cpp=.o)
EXEC = main

$(EXEC): $(OBJ)
	$(CC) -o $@ $^

%.o: %.cpp %.h
	$(CC) -c $<

clean:
	rm -f $(OBJ) $(EXEC)