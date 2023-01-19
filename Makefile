CXX := clang++
CXXFLAGS := -std=c++17 -Wall
LDFLAGS := -lncurses

# Declare names that indicate recipes, not files 
.PHONY: all clean

src := $(wildcard *.cpp)
headers := $(filter-out main.h, $(patsubst %.cpp, %.h, $(src)))
obj := $(patsubst %.cpp, %.o, $(src))
bin := tetris

all: $(bin)

$(bin): $(obj)
	$(CXX) $(LDFLAGS) $^ -o $@

# Generic object file creation rule
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -MMD -c $< -o $@

clean:
	rm -f *.d *.o $(bin)
