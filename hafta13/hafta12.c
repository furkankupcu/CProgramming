#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define talloc(ty,ts) (ty*) malloc(ts*sizeof(ty)); //ty = type ts=size
 
int main(){

char *c;
// c = (char *) malloc(10*sizeof(char));
c=talloc(char,10);
strcpy(c,"merhaba");
printf("%s\n",c);

}