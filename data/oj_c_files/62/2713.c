#include <ctype.h>
#include <errno.h>
#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
int a,b,m,n;
char cc[1000];
char an[1000]={"0"};
gets(cc);
m=strlen(cc);
b=1;
an[0]=cc[0];
for(a=1;a<=m;a++){
    if((cc[a]!=' ')||(cc[a]==' '&&cc[a-1]!=' ')){
    an[b]=cc[a];
    b++;}
}
printf("%s",an);
return 0;
}
