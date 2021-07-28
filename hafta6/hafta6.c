#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>

void main(){

typedef long unsigned int ul;
char kaan[] = "Kaan";
char *kaanp = kaan;
int x=13;
int *xp= &x;

printf("%d \t 0x%lx \n",*xp,(ul)xp);
printf("%s \t 0x%lx \n",kaan,(ul)kaan);
printf("%c",kaan[0]);


}