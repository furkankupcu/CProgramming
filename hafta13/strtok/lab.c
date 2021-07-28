#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){

    char * t;
    char str[]="deneme Kaan deneme dedas dde ad";
    char * delim = " ";
    /*
    t= strtok(str,delim);
    while (t!=NULL)
    {
        printf("%s \n",t);
        t=strtok(NULL,delim);
    }
    */
   char *p;
   t=strtok_r(str,delim,&p);
   while (t)
   {
       printf("%s %s \n",t,p);
       t=strtok_r(NULL,delim,&p);
   }
   

}