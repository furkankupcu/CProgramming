/*uygulama

sudo !! -> bir önce yazdığım komudu sudo ile çalıştır
..
*/
//teorik
#include <stdio.h>
#include <stdlib.h>

typedef unsigned long UL;

int main()
{   
        unsigned int array[4];
        unsigned int *ip;
        unsigned int *cp;
        unsigned int short *sp;

        int i;


        array[0] = 0x12345678;
        array[1] = 0x9abcdef0;
        array[2] = 0x13579bdf;
        array[3] = 0x2468ace0;

    printf("array = 0x%lx \n", (UL) array);

    for(i=0;i<4;i++){

        // printf("array[%d] 0x%lx 0x%x %d\n",i,(UL) &array[i],array[i],array[i]);

        printf("array[%d] 0x%lx 0x%x %d\n",i,(UL) array+i, *(array+i),array[i]); //pointer aritmetiği
  
        //*(array+i)   dereferensing
    }   

    printf("\n");

    cp = (unsigned char*) array;

    printf("cp 0x%lx",(UL) cp );

    printf("\n");

    for(i=0;i<16;i++){
        
        // printf("array[%d] 0x%lx 0x%x %d\n",i,(UL) &array[i],array[i],array[i]);

        printf("cp[%d] 0x%lx 0x%x %d\n",i,(UL) cp+i, *(cp+i),cp[i]); //pointer aritmetiği
  
        //*(array+i)   dereferensing
    }  

    printf("cp 0x%lx\n",(UL) cp);

    cp++;

    printf("cp 0x%lx 0x%x\n",(UL) cp,*cp);

    ip = (unsigned int *) cp;

     printf("\n");

    for(i=0;i<4;i++){
        
        // printf("array[%d] 0x%lx 0x%x %d\n",i,(UL) &array[i],array[i],array[i]);

        printf("ip[%d] 0x%lx 0x%x %d\n",i,(UL) ip+i, *(ip+i),ip[i]); //pointer aritmetiği
  
        //*(array+i)   dereferensing
    }  


    return EXIT_SUCCESS;
}