CC=g++
FLAGS=-g -Wall -std=c++17

SOURCES = $(wildcard *.cpp)
OBJS = $(SOURCES:.cpp=.o)

power_mod: $(OBJS)
	$(CC) $(FLAGS) -o $@ $^

%.o: %.cpp
	$(CC) $(FLAGS) -c $<

clean:
	rm -f $(OBJS) power_mod
