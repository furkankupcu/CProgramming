#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "jval.h"
#include "dllist.h"

/* çalıştırma kodu
    gcc src/a4.c -o bin/a4 -Iinclude -lfdr -Llib 
*/

int main(int argc,char **argv){


    Dllist i;
    i = new_dllist(); //dllist oluşturma
   

    Jval jval; 

    jval = new_jval_s("furkan"); //jval'a değer atama
    dll_append(i,jval);  //dllist e ekleme
    jval = new_jval_s("kaan");
    dll_append(i,jval);
    jval = new_jval_s("ugur");
    dll_append(i,jval);
    jval = new_jval_s("yunus");
    dll_append(i,jval);

    free_dllist(i); //dllisti silme,ayırdığımız yerleri free yapma
    

}