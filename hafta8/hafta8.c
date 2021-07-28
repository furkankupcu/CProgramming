#include <stdlib.h>
#include <string.h>
#include <stdio.h>

typedef unsigned int UL;

typedef struct personofbilmemne{

    int Id;
    char name[12];
    char surname[16];
    char mail [26];
    char city[];

} person;

int main(int argc,char**argv){

   // person *p = (person*) malloc(sizeof(person));
    /*
    person p;

    printf("%d\n",(UL) sizeof(p));
    printf("%d %d %d %d\n",(UL) sizeof(p.Id),(UL) sizeof(p.name),(UL) sizeof(p.surname),(UL) sizeof(p.mail));
    strcpy(p.city,"sultan");
    printf("%d\n",(UL) sizeof(p));
    person b;
    scanf("%d %s %s %s %s",&b.Id,b.name,b.surname,b.mail,b.city);
    printf("%d %s %s %s %s\n",b.Id,b.name,b.surname,b.mail,b.city);
    */

   person C;
   FILE *f=stdin;
    char line[200];

    fgets(line,200,f);

    char *t=strtok(line,";");
    while (t!=NULL);
    {
        printf("%s\n",t);
        t=strtok(NULL,";");
    }
    








    return EXIT_SUCCESS;
}