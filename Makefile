OBJS =  main.o allclass.o
CFLAG = -Wall -g
CC = g++

hello:${OBJ}
   ${CC} ${CFLAGS} -o $@ ${OBJS}

clean:
   -rm -f *.o *.core
