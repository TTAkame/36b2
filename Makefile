CC = gcc
CFLAGS = -g
TARGET = robin

$(TARGET): $(TARGET).c
	$(CC) $(CFLAGS) -o out $(TARGET).c
clean:
	$(RM) $(TARGET)
