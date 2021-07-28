#include <stdio.h>

int main()
{
    int x=10;
    int *y;
    int **z;

    y = &x;
    z = &y;

    printf("Value of x \t=%d \t %x\n",x,&x);
    printf("Value of x \t=%d \t %x \t %x\n",*y,y,&y);
    printf("Value of x \t=%d \t %x \t %x\t %x\n",**z,*z,z,&z);


return 0;

}