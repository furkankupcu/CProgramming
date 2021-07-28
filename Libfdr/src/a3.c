#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "jval.h"

typedef struct dllist {

    struct dllist *flink;
    struct dllist *blink;
    Jval val;
}   *Dllist;

int main(int argc, char **argv)
{   
    
    Jval test = new_jval_i(5);
    printf("%d\n",test);
    
}