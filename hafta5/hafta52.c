/*uygulama

sudo !! -> bir önce yazdığım komudu sudo ile çalıştır
..
*/
//teorik
#include <stdio.h>
#include <stdlib.h>

typedef unsigned long UL;

typedef struct
{
    long a;
    char b;     //sırası değiştiğin de boyut değişebilir.
    int c;

}ii ;


int main(int argc,char **argv)
{   
    
    ii *x;
    
    x = (ii *) malloc(sizeof(ii));

    x->a = 20;
    x->b = 30;


    printf("%d %d \n",x->a,x->b);
    printf("size of= %d \n",(UL) sizeof(ii));
    printf("0x%lx 0x%lx 0x%lx ",(UL) &x->a,&x->b,&x->c);

    /*for(i=0;i<4;i++){

    printf("array[%d] 0x%lx 0x%x %d\n",i,(UL) (array+i), *(array+i),array[i]); //pointer aritmetiği
    }   
    printf("\n");
    */
    return EXIT_SUCCESS;
}