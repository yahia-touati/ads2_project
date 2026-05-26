CC = gcc
CFLAGS = -I./include -Wall
SRCS = demo.c $(wildcard Menu/*.c) $(wildcard src/*.c) $(wildcard bonus/*.c)
TARGET = my_project

all: $(TARGET)
$(TARGET):	$(SRCS) 
	$(CC) $(CFLAGS) $(SRCS) -o $(TARGET)
run: all
	./$(TARGET)
clean:	
	rm -f $(TARGET)
	
