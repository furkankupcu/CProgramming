#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef unsigned long (UL);

int main (){


char a[5];
char b[5];
char c[5];

// \0 her zaman var

strcpy(a,"Ali");

strcpy(b,"Ayse");

strcpy(c,"Yunus"); // fazla değer verilince \0 başka yere yazılır
                  // stack smashing
printf("%s %s %s\n",a,b,c);

return 0 ;

}