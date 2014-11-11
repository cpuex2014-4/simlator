CC = gcc
CFLAGS = -lm -Wall -Wextra -g -std=c11
TARGET = sim
SIM = simulator.o
FPU = fpu/C/float.o fpu/C/fadd.o fpu/C/fmul.o fpu/C/finv.o fpu/C/itof.o fpu/C/ftoi.o fpu/C/fcmp.o

all: $(TARGET)

$(TARGET): $(FPU) $(SIM)
	$(CC) -o $(TARGET) $(SIM) $(FPU) $(CFLAGS)

clean:
	rm -f $(SIM) $(FPU) $(TARGET) *.o *~
