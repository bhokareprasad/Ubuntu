OBJS = hello_world.cpp
TARGET = hello_world.o
CC = g++
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)

$(TARGET) : $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o $(TARGET)

clean:
	\rm *.o *.out *~ $(TARGET)
