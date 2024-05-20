CUDA_PATH := /usr/local/cuda
NVCC := $(CUDA_PATH)/bin/nvcc

# Add /usr/local/cuda/bin to PATH
export PATH := $(CUDA_PATH)/bin:$(PATH)

TARGET := poly_mul
SRC := main.cu
# Object files
OBJ := $(SRC:.cu=.o)
HEADERS := poly_mul.hpp

all: $(TARGET)

$(TARGET): $(OBJ)
	$(NVCC) -o $@ $^

%.o: %.cu $(HEADERS)
	$(NVCC) -c -o $@ $<

clean:
	rm -f $(OBJ) $(TARGET)
