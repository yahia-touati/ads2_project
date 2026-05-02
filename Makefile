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
	
>>>>>>> 00eb491df79eca42736c23e1d9679e874a9f5375
