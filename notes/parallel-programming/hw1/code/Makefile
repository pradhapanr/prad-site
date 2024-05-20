# Detect the operating system
OS := $(shell uname)

# Set default CXX for Linux
CXX = clang++
CC = clang

# Override compiler for macOS
ifeq ($(OS), Darwin)
    CC = xcrun cilk
    CXX = xcrun cilk++
endif

CXXFLAGS = -g -O3 --std=c++20 -Wall -Wextra -fopencilk

# add -DENABLE_CILK to enable cilk
CCFLAGS = -g -O3 -Wall -Wextra -fopencilk -DENABLE_CILK

SRCS_q1 = main_q1.cpp SquareMatrix.cpp SquareMatrixView.cpp lower_triangular_inverse.cpp
HEADERS_q1 = SquareMatrix.hpp SquareMatrixView.hpp
OBJS_q1 = $(SRCS_q1:.cpp=.o)
BIN_q1 = q1

SRCS_q2 = main_q2.c
HEADERS_q2 =
OBJS_q2 = $(SRCS_q2:.c=.o)
BIN_q2 = q2

# Default target to build both binaries
all: $(BIN_q1) $(BIN_q2)

$(BIN_q1): $(OBJS_q1)
	$(CXX) $(CXXFLAGS) $(OBJS_q1) -o $(BIN_q1)

$(BIN_q2): $(OBJS_q2)
	$(CXX) $(CXXFLAGS) $(OBJS_q2) -o $(BIN_q2)

%.o: %.cpp $(HEADERS_q1) $(HEADERS_q2)
	$(CXX) $(CXXFLAGS) -c $< -o $@

%.o: %.c $(HEADERS_q1) $(HEADERS_q2)
	$(CC) $(CCFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS_q1) $(BIN_q1) $(OBJS_q2) $(BIN_q2)
