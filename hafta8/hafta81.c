#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "topla.h"

typedef unsigned int UL;

int main(int argc,char**argv){


    /*int topla (int a,int b){

        return a+b;
    }

    int *xp;
    int *yp;

    xp = (int *)malloc (sizeof(int));
    yp = (int *)malloc (sizeof(int));

    *xp=2;
    *yp=3;
    printf("%d\n",topla(*xp,*yp));
    */

  /* int topla (int *a,int *b){

        return *a + *b;
    }
*/
    int *xp;
    int *yp;

    xp = (int *)malloc (sizeof(int));
    yp = (int *)malloc (sizeof(int));

    *xp=2;
    *yp=3;


    int x=2;
    int y=3;

    printf("%d\n",topla(&x,&y));










    return EXIT_SUCCESS;
}


