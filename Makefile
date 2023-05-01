CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++11

TARGET = setup	
SRCS = main.cpp LinkedList.cpp Node.cpp
OBJS = $(SRCS:.cpp=.o)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)
