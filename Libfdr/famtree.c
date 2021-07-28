#include <stdio.h>
#include <stdlib.h>
#include "fields.h"

typedef struct {
    char name[20];				/* family tree structure */
   char sex;
   struct person *mother;
   struct person *father;
   

} Person;

typedef struct dllist {
  struct dllist *flink;
  struct dllist *blink;
  Jval val;
} *Dllist;l



int main (int argc, char **argv)
{
  IS is; //input struct oluştur
  int i;
  if(argc != 2) {
    fprintf(stderr, "use: pr filename\n");
    exit(1);
  }

  is = new_inputstruct(argv[1]); //file name = acgv[1]

  if (is == NULL) { //null ise,
    perror(argv[1]);//error ver
    exit(1);//programı sonlandır
  }

  while(get_line(is) >= 0) //satır okuma kısmı
  {
    for(i=0;i<is->NF;i++)
      {


        
	printf("%d: %s\n", is->line, is->fields[i]);
      }
  }

  jettison_inputstruct(is);
  return 0;
  
}
