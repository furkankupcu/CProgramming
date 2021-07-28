#include <stdio.h>
#include <stdlib.h>

typedef unsigned long UL;


int main(int argc,char **argv)
{   
    char c;
    int i;
    int j;

    i=10000;
    c=i;
    j=c;
    
    printf("i:%d c:%d j:%d\n",i,c,j);
    printf("i:0x%04x i:0x%04x i:0x%04x\n ",(UL) i,(UL) c,(UL) j);
    
    return EXIT_SUCCESS;
}