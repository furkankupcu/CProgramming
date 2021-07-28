#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "fields.h"

int main(int argc,char **argv)
{

IS is;
is = new_inputstruct(argv[1]); 
if ( is == NULL){
    perror(argv[1]);
    exit(1);
}

while (get_line(is ) >=0)
{
    for(int i=0;i< is->NF;i++){
        printf("%d: %s\n", is->line,is->fields[i]);
    }
}

jettison_inputstruct(is);
return EXIT_SUCCESS;



/*
char * arr = (char *) malloc (5*sizeof(char));
fgets(arr,5,stdin);
printf("text : %s, len: %ld, size : %ld\n ",arr,strlen(arr),sizeof(arr));
return EXIT_SUCCESS;
*/









}