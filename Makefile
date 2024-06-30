CXX = g++
CXXFLAGS = -std=c++17 -Wall -I/home/jimmymannekkattu/projects/json/include

SOURCES = main.cpp
EXECUTABLE = myapp

all: $(EXECUTABLE)

$(EXECUTABLE): $(SOURCES)
    $(CXX) $(CXXFLAGS) $(SOURCES) -o $(EXECUTABLE)

clean:
    rm -f $(EXECUTABLE)
