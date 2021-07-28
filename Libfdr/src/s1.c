#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "jval.h"
#include "dllist.h"

/* çalıştırma kodu
    gcc s1.c -o s1 jval.c dllist.c
*/

int main(int argc,char **argv){


    Dllist i;
    i = new_dllist(); //dllist oluşturma
   
    //ilk düğüm boş bırakılmıştır,değer atanmamıştır.

    Jval jval; 

    jval = new_jval_s("a"); //jval'a değer atama
    dll_append(i,jval);  //dllist'e ekleme(append etme)
    jval = new_jval_s("b");
    dll_append(i,jval);
    jval = new_jval_s("c");
    dll_append(i,jval);
    jval = new_jval_s("d");
    dll_append(i,jval);

    free_dllist(i); //dllisti silme,ayırdığımız yerleri free yapma

}