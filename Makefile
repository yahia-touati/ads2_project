CC = gcc
CFLAGS = -I./include -Wall
SRCS = demo.c $(wildcard Menu/*.c) $(wildcard src/*.c)
TARGET = my_project

all: $(TARGET)
$(TARGET):	$(SRCS) 
	$(CC) $(CFLAGS) $(SRCS) -o $(TARGET)
run: all
	./$(TARGET)
clean:	
	rm -f $(TARGET)
<<<<<<< HEAD
=======
	
>>>>>>> e47c65af04747d2bb392316b6827d0b9d8c14a88
