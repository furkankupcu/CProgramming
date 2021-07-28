//Yarıçapı argüman olarak alınan dairenin çevresini hesaplayan macroyu yazınız. Macroyu kullanan örnek bir main gövdesi oluşturunuz.


//gcc s2.c -o s2

#include <stdio.h>
#define Cevre(r)  3.14 * r * r

int main(){

    printf("%f",Cevre(5));

}