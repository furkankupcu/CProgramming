#include <stdio.h>
#include <stdlib.h>

typedef unsigned int UL;

int main()
{   
  unsigned int array[4]; 
  unsigned int *ip;
  unsigned char *cp;
  unsigned short *sp;
  int i;

  array[0] = 0x12345678;
  array[1] = 0x9abcdef0;
  array[2] = 0x13579bdf;
  array[3] = 0x2468ace0;

  printf("0x%lx\n",array);

/*
  for (i=0;i<4;i++)
    printf("%d 0x%lx 0x%lx\n",i,(UL) (array+i),(UL) array[i] );
  
  cp=(unsigned char *) array;

  for (i=0;i<4;i++)
    printf("%d 0x%lx 0x%lx\n",i,(UL) (cp+i),(UL) cp[i] );

  sp=(unsigned short *) array;

  for (i=0;i<4;i++)
    printf("%d 0x%lx 0x%lx\n",i,(UL) (sp+i),(UL) sp[i] );
  */

    return EXIT_SUCCESS;
}
