CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++11 -O2

TARGET = main.out	
SRCS = main.cpp LinkedList.cpp Node.cpp
OBJS = $(SRCS:.cpp=.o)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)
	./main.out 5 2 7 10 I 3 9
	@echo "expected output: [5 2 9 7 10]\n"
	./main.out 3 4 2 1 D 3 0
	@echo "expected output: [3 4 1]\n"
	./main.out 45 20 2 10 G 3 0
	@echo "expected output: 2 [45 20 2 10]\n"
	make clean
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)

