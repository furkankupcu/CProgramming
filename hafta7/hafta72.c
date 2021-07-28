#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef unsigned long UL;

int main(int argc,char **argv)
{
   /* int i;
    int j;
    scanf("%d %d",&i,&j); //scanf("%d,%d",&i,&j);
    printf("%d+%d=%d\n",i,j,i+j);
    */
    /*
    int i;
    if (scanf("%d",&i) == 1){
        printf("i: %d 0x%x\n",i,i);
    } else {
        printf("Problem \n");
    } 
    */
    //$ echo ali /komut satırı
    //ali

    //| payp işareti soldaki programın çıktısı sağdakine  input
    //echo 12 | ./hafta72

    char d[10];
    char s[10];

    printf("0x%lx 0x%lx",(UL) d,(UL) s);
    if (scanf("%s",d) != 1) exit(EXIT_FAILURE);

    printf("%s %s\n",d,s);


return EXIT_SUCCESS;
}