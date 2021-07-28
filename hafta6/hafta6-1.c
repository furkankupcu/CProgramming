#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef unsigned long UL;

int main(int argc,char**argv){

    char give[5];
    char him[5];
    char six[5];

    printf("0x%lx 0x%lx 0x%lx\n",(UL) give,(UL) him,(UL) six);

    strcpy(give,"Give");

    strcpy(him,"Him");

    strcpy(six,"Six");

    printf("%s %s %s\n",give,him,six);

    strcpy(him,"ali gel okul acildi");

    printf("%s %s %s\n",give,him,six);

    return EXIT_SUCCESS;


}