/*

mkdir include; mv *.h include -> noktalı virgül kullanma

mkdir src; mv *.c src; mkdir bin; mkdir obj;

mkdir lib

make lib/libfdr.a



*/

INCLUDE = -Iinclude 
CC = gcc

OBJS = obj/fields.o

lib/linfdr.a: $(OBJS)
            ar r lib/libdfr.a $(OBJSS)
            rablib lib/libfdr.a

clean: 
        rm -f obj/* lib/*

obj/fields.o : src/fields.c  include/fields.h
                $(CC) $(INCLUDE) -c -o obj/fields.o src/fields.c

obj/jval.o : src/jval.c  include/jval.h
                $(CC) $(INCLUDE) -c -o obj/jval.o src/jval.c
