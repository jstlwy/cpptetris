CXX := clang++
CXXFLAGS := -std=c++17 -Wall -Wextra -Werror
LDFLAGS := -lncurses

bin := tetris

.PHONY: all
all: $(bin)

$(bin): main.o tetromino.o
	$(CXX) $(LDFLAGS) $^ -o $@

main.o: main.cpp tetromino.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

tetromino.o: tetromino.cpp tetromino.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

.PHONY: clean
clean:
	rm -f *.d *.o $(bin)

