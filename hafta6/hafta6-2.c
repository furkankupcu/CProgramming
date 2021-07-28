#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef unsigned long UL;

int main(int argc,char**argv){

    char *s;

    int i;

    if(argc!= 2){fprintf(stderr,"usage %s number\n",argv[0]); exit(1)}

    n = atoi(*(argv+1))

    printf("n %d\n",n);

    s= (char *) malloc(sizeof(char)*(n+1));
    strcpy(s,"");

    for (i=0;i<n;i++) { strcat(s,"x");}

    printf("%s\n",s);

    return EXIT_SUCCESS;

    // time sh -c "./p29 10 ->dev/null" süre ölçme standart outputu yönlendirmek
}