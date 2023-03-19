CXX := g++
CXXFLAGS := -std=c++17 -Wall
LDFLAGS := -lncurses

# Declare names that indicate recipes, not files 
.PHONY: all clean

src := $(wildcard *.cpp)
headers := $(addsuffix .h, $(basename $(filter-out main.cpp, $(src))))
obj := $(addsuffix .o, $(basename $(src)))
bin := tetris

all: $(bin)

$(bin): $(obj)
	$(CXX) $^ -o $@ $(LDFLAGS)

# Generic object file creation rule
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -MMD -c $< -o $@

clean:
	rm -f *.d *.o $(bin)
