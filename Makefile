OBJS =  main.o allclass.o
CFLAG = -Wall -g
CC = g++

hello: ${OBJS}
   ${CC} ${CFLAGS} -o robin ${OBJS}

clean:
   -rm -f *.o robin
