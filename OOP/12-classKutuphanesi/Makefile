CXX = g++
CXXFLAGS = -std=c++98 -Wall -Wextra

SRCS = 12-classKutuphanesi.cpp main.cpp
OBJS = $(SRCS:.cpp=.o)

TARGET = program

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

.cpp.o:
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)


