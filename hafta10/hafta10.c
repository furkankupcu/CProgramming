
/*

------dosya taşıma
mv libmat/libmat.a
mv libmat ./lib

mv lib/libmat.a

tree => dizinleri gösterir
gcc -o prg4 main.o -lmat -L./lib


mv *.h include   sonu h olan dosyaları include klasörüne taşıma

mat.h~  ~ => dosyanın yedeğini oluşturma / derleyici yapıyor

rm mat.h => silme

gcc -c main.c 

gcc -c main.c Iinclude  - Iinclude kaynak dosyası belirleme

gcc -o prg main.o -lmat -Llib -Iinclude  

-------------------
mkdir bin -dosya oluşturma

makefile

hello: kural = src/hello.c
            gcc -o bin/hello src/hello.c
make

obj/main.o: src/main.c include/mat.h
            gcc -o bin/hello src/main.c

obj/main.o: src/main.c include/mat.h
            gcc -c -o obj/mat.o src/main.c -I.include


obj/main.o: src/main.c include/mat.h
            gcc -c -o obj/mat.o src/main.c $(INCLUDE)

obj/main.o: src/main.c
            gcc -c -o obj/mat.o src/main.c $(INCLUDE)









*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef unsigned long UL;

int main(int argc,char **argv)
{
    


    return 0;
}