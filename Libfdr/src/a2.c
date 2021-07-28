#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fields.h"



int main(int argc,char **argv){

IS is;
int i,n;
char *lines[10];

is = new_inputstruct(NULL);
n=0;
while (get_line(is) >= 0)
{
    lines[n%10] = is->text1;
    n++;
}

i = (n>=10) ? (n-10) : 0;
for ( ; i<n; i++) printf("%s",lines[i%10]);

}
